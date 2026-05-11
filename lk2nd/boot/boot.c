// SPDX-License-Identifier: BSD-3-Clause
/* Copyright (c) 2023 Nikita Travkin <nikita@trvn.ru> */

#include <debug.h>
#include <dev/fbcon.h>
#include <dev/key-codes.h>
#include <kernel/thread.h>
#include <lib/bio.h>
#include <lib/fs.h>
#include <list.h>
#include <platform.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <target.h>

#include <lk2nd/boot.h>
#include <lk2nd/device/keys.h>
#include <lk2nd/hw/bdev.h>
#include <lk2nd/util/minmax.h>

#include "boot.h"

#ifndef LK2ND_BOOT_MIN_SIZE
#define LK2ND_BOOT_MIN_SIZE (16 * 1024 * 1024)
#endif

#define MAX_BOOT_ENTRIES 32
#define FONT_W 6
#define FONT_H 12

extern unsigned boot_into_recovery;

bool lk2nd_boot_enter_fastboot = false;
char lk2nd_boot_ptn_override[32] = "";

static int boot_scale_factor;
static int boot_font_h;

static int calc_scale_factor(void)
{
	struct fbcon_config *fb = fbcon_display();
	if (!fb) return 1;
	return max(1U, min(fb->width, fb->height) / (FONT_W * 40));
}

static void menu_puts(int x, int y, const char *str, int color)
{
	while (*str) {
		fbcon_putc_factor_xy(*str++, color, boot_scale_factor, x, y);
		x += FONT_W * boot_scale_factor;
	}
}

void lk2nd_collect_boot_options(struct boot_entry *entries, int *count)
{
	struct bdev_struct *bdevs = bio_get_bdevs();
	char mountpoint[32];
	char extlinux_path[64];
	struct filehandle *fh;
	bdev_t *bdev;
	int i = 0;
	int ret;

	list_for_every_entry(&bdevs->list, bdev, bdev_t, node) {
		if (!bdev->is_leaf)
			continue;
		if (bdev->size < LK2ND_BOOT_MIN_SIZE &&
		    !(bdev->label && !strncmp(bdev->label, "boot", 5)))
			continue;
		if (i >= MAX_BOOT_ENTRIES - 1)
			break;

		if (bdev->label && !strncmp(bdev->label, "boot", 5)) {
			snprintf(entries[i].name, sizeof(entries[i].name),
				 "Android: %s", bdev->label);
			entries[i].type = ENTRY_ANDROID;
			strlcpy(entries[i].partition, bdev->label,
				sizeof(entries[i].partition));
			i++;
		}

		snprintf(mountpoint, sizeof(mountpoint), "/%s", bdev->name);
		ret = fs_mount(mountpoint, "ext2", bdev->name);
		if (ret < 0)
			goto check_recovery;

		snprintf(extlinux_path, sizeof(extlinux_path),
			 "%s/extlinux/extlinux.conf", mountpoint);
		ret = fs_open_file(extlinux_path, &fh);
		if (ret == 0) {
			fs_close_file(fh);
			snprintf(entries[i].name, sizeof(entries[i].name),
				 "extlinux: %s",
				 bdev->label ? bdev->label : bdev->name);
			entries[i].type = ENTRY_EXTLINUX;
			strlcpy(entries[i].partition,
				bdev->label ? bdev->label : bdev->name,
				sizeof(entries[i].partition));
			strlcpy(entries[i].mountpoint, mountpoint,
				sizeof(entries[i].mountpoint));
			i++;
		}

check_recovery:
		if (bdev->label && !strcmp(bdev->label, "recovery") &&
		    bdev->size >= LK2ND_BOOT_MIN_SIZE) {
			snprintf(entries[i].name, sizeof(entries[i].name),
				 "Android: recovery");
			entries[i].type = ENTRY_ANDROID;
			strlcpy(entries[i].partition, "recovery",
				sizeof(entries[i].partition));
			i++;
		}
	}

	snprintf(entries[i].name, sizeof(entries[i].name), "Fastboot mode");
	entries[i].type = ENTRY_FASTBOOT;
	i++;

	*count = i;
}

int lk2nd_show_boot_menu(struct boot_entry *entries, int count)
{
	struct fbcon_config *fb = fbcon_display();
	int sel = 0;
	time_t start, elapsed;
	int remaining, i;
	int y;
	bool has_fb = (fb != NULL);

	if (has_fb) {
		boot_scale_factor = calc_scale_factor();
		boot_font_h = FONT_H * boot_scale_factor;
		fbcon_clear();
	} else {
		dprintf(INFO, "boot: No framebuffer, fallback\n");
	}

	start = current_time();

	while (1) {
		char buf[64];

		elapsed = (current_time() - start) / 1000;
		remaining = max(0, BOOT_TIMEOUT_SEC - (int)elapsed);

		if (has_fb) {
			fbcon_clear();

			y = boot_font_h * 2;
			boot_scale_factor += 1;
			menu_puts(FONT_W * boot_scale_factor, y,
				  "lk2nd Boot Menu", FBCON_TITLE_MSG);
			y += FONT_H * boot_scale_factor;
			boot_scale_factor = calc_scale_factor();

			for (i = 0; i < count; i++) {
				snprintf(buf, sizeof(buf), "%c %s",
					 i == sel ? '>' : ' ', entries[i].name);
				menu_puts(FONT_W * boot_scale_factor * 4,
					  y + i * boot_font_h, buf,
					  i == sel ? FBCON_GREEN_MSG : FBCON_COMMON_MSG);
			}

			y += count * boot_font_h + boot_font_h;
			snprintf(buf, sizeof(buf),
				 "Auto boot in %ds... (Vol+/- nav, Power select)",
				 remaining);
			menu_puts(FONT_W * boot_scale_factor, y,
				  buf, FBCON_YELLOW_MSG);

			fbcon_flush();
		}

		if (remaining <= 0)
			return sel;

		for (i = 0; i < 5; i++) {
			thread_sleep(200);
			elapsed = (current_time() - start) / 1000;
			if ((int)elapsed >= BOOT_TIMEOUT_SEC)
				return sel;
		}

		if (lk2nd_keys_pressed(KEY_VOLUMEUP)) {
			sel = (sel == 0) ? count - 1 : sel - 1;
			start = current_time();
		} else if (lk2nd_keys_pressed(KEY_VOLUMEDOWN)) {
			sel = (sel == count - 1) ? 0 : sel + 1;
			start = current_time();
		} else if (lk2nd_keys_pressed(KEY_POWER)) {
			return sel;
		}
	}
}

void lk2nd_boot(void)
{
	static bool init_done = false;
	struct boot_entry entries[MAX_BOOT_ENTRIES];
	int count = 0;
	int sel;

	lk2nd_boot_enter_fastboot = false;
	lk2nd_boot_ptn_override[0] = '\0';

	if (!init_done) {
		lk2nd_bdev_init();
		init_done = true;
	}

	lk2nd_collect_boot_options(entries, &count);

	if (count <= 1)
		return;

	sel = lk2nd_show_boot_menu(entries, count);

	switch (entries[sel].type) {
	case ENTRY_EXTLINUX:
		dprintf(INFO, "boot: Booting extlinux from %s\n",
			entries[sel].partition);
		lk2nd_try_extlinux(entries[sel].mountpoint);
		break;
	case ENTRY_ANDROID:
		dprintf(INFO, "boot: Booting Android from %s\n",
			entries[sel].partition);
		if (!strcmp(entries[sel].partition, "recovery")) {
			boot_into_recovery = 1;
		} else if (strcmp(entries[sel].partition, "boot") != 0) {
			strlcpy(lk2nd_boot_ptn_override,
				entries[sel].partition,
				sizeof(lk2nd_boot_ptn_override));
		}
		return;
	case ENTRY_FASTBOOT:
		dprintf(INFO, "boot: Entering fastboot mode\n");
		lk2nd_boot_enter_fastboot = true;
		return;
	}
}
