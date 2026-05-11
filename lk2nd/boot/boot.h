/* SPDX-License-Identifier: BSD-3-Clause */
#ifndef LK2ND_BOOT_BOOT_H
#define LK2ND_BOOT_BOOT_H

#include <list.h>
#include <string.h>

#include <lk2nd/boot.h>

/* util.c */
void lk2nd_print_file_tree(char *root, char *prefix);

/* extlinux.c */
void lk2nd_try_extlinux(const char *mountpoint);

/* boot.c */
#define BOOT_TIMEOUT_SEC 10

enum boot_entry_type {
	ENTRY_ANDROID,
	ENTRY_EXTLINUX,
	ENTRY_FASTBOOT,
};

struct boot_entry {
	char name[32];
	enum boot_entry_type type;
	char partition[32];
	char mountpoint[32];
};

extern bool lk2nd_boot_enter_fastboot;
extern char lk2nd_boot_ptn_override[32];

void lk2nd_collect_boot_options(struct boot_entry *entries, int *count);
int lk2nd_show_boot_menu(struct boot_entry *entries, int count);

#endif /* LK2ND_BOOT_BOOT_H */
