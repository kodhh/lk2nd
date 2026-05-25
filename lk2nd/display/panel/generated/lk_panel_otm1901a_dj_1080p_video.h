// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2026 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_OTM1901A_DJ_1080P_VIDEO_H_
#define _PANEL_OTM1901A_DJ_1080P_VIDEO_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config otm1901a_dj_1080p_video_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_otm1901a_dj_1080p_video",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 60,
	.panel_lp11_init = 1,
	.panel_init_delay = 50000,
};

static struct panel_resolution otm1901a_dj_1080p_video_panel_res = {
	.panel_width = 1080,
	.panel_height = 1920,
	.hfront_porch = 52,
	.hback_porch = 60,
	.hpulse_width = 4,
	.hsync_skew = 0,
	.vfront_porch = 12,
	.vback_porch = 14,
	.vpulse_width = 2,
	/* Borders not supported yet */
};

static struct color_info otm1901a_dj_1080p_video_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char otm1901a_dj_1080p_video_on_cmd_0[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_1[] = {
	0x04, 0x00, 0x29, 0xc0, 0xff, 0x19, 0x01, 0x01
};
static char otm1901a_dj_1080p_video_on_cmd_2[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_3[] = {
	0x03, 0x00, 0x29, 0xc0, 0xff, 0x19, 0x01, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_4[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_5[] = {
	0x02, 0x00, 0x29, 0xc0, 0x1c, 0x33, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_6[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xa0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_7[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc1, 0xe8, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_8[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xa7, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_9[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc1, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_10[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x90, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_11[] = {
	0x07, 0x00, 0x29, 0xc0, 0xc0, 0x00, 0x2f, 0x00,
	0x00, 0x00, 0x01, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_12[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xc0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_13[] = {
	0x07, 0x00, 0x29, 0xc0, 0xc0, 0x00, 0x2f, 0x00,
	0x00, 0x00, 0x01, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_14[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x9a, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_15[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc0, 0x1e, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_16[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xac, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_17[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc0, 0x06, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_18[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xdc, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_19[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc0, 0x06, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_20[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x81, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_21[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa5, 0x04, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_22[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x84, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_23[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc4, 0x20, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_24[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xa5, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_25[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb3, 0x1d, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_26[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x92, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_27[] = {
	0x02, 0x00, 0x29, 0xc0, 0xe9, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_28[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x90, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_29[] = {
	0x02, 0x00, 0x29, 0xc0, 0xf3, 0x01, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_30[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xb4, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_31[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc0, 0xd0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_32[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x93, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_33[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc5, 0x19, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_34[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x95, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_35[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc5, 0x2d, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_36[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x97, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_37[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc5, 0x14, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_38[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x99, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_39[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc5, 0x29, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_40[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_41[] = {
	0x03, 0x00, 0x29, 0xc0, 0xd8, 0x1d, 0x1d, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_42[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xb3, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_43[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc0, 0xcc, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_44[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xb4, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_45[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc0, 0x80, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_46[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xbc, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_47[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc0, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_48[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xf7, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_49[] = {
	0x05, 0x00, 0x29, 0xc0, 0xc3, 0x04, 0x18, 0x04,
	0x04, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_50[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x81, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_51[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa5, 0x07, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_52[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x9d, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_53[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc5, 0x77, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_54[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x9b, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_55[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc5, 0x55, 0x55, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_56[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_57[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc4, 0x15, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_58[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_59[] = {
	0x0f, 0x00, 0x29, 0xc0, 0xc0, 0x00, 0x87, 0x00,
	0x0a, 0x0a, 0x00, 0x87, 0x0a, 0x0a, 0x00, 0x87,
	0x00, 0x0a, 0x0a, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_60[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xf0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_61[] = {
	0x07, 0x00, 0x29, 0xc0, 0xc3, 0x22, 0x02, 0x00,
	0x00, 0x00, 0x0c, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_62[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xa0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_63[] = {
	0x08, 0x00, 0x29, 0xc0, 0xc0, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x22, 0x03
};
static char otm1901a_dj_1080p_video_on_cmd_64[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xd0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_65[] = {
	0x08, 0x00, 0x29, 0xc0, 0xc0, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x22, 0x03
};
static char otm1901a_dj_1080p_video_on_cmd_66[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x90, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_67[] = {
	0x09, 0x00, 0x29, 0xc0, 0xc2, 0x83, 0x01, 0x00,
	0x00, 0x82, 0x01, 0x00, 0x00, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_68[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_69[] = {
	0x0d, 0x00, 0x29, 0xc0, 0xc3, 0x82, 0x02, 0x03,
	0x00, 0x03, 0x84, 0x81, 0x03, 0x03, 0x00, 0x03,
	0x84, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_70[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x90, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_71[] = {
	0x0d, 0x00, 0x29, 0xc0, 0xc3, 0x00, 0x01, 0x03,
	0x00, 0x03, 0x84, 0x01, 0x02, 0x03, 0x00, 0x03,
	0x84, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_72[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_73[] = {
	0x10, 0x00, 0x29, 0xc0, 0xcc, 0x09, 0x0a, 0x11,
	0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x28,
	0x28, 0x28, 0x28, 0x28
};
static char otm1901a_dj_1080p_video_on_cmd_74[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x90, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_75[] = {
	0x10, 0x00, 0x29, 0xc0, 0xcc, 0x0a, 0x09, 0x14,
	0x13, 0x12, 0x11, 0x15, 0x16, 0x17, 0x18, 0x28,
	0x28, 0x28, 0x28, 0x28
};
static char otm1901a_dj_1080p_video_on_cmd_76[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xa0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_77[] = {
	0x10, 0x00, 0x29, 0xc0, 0xcc, 0x1d, 0x1e, 0x1f,
	0x19, 0x1a, 0x1b, 0x1c, 0x20, 0x21, 0x22, 0x23,
	0x24, 0x25, 0x26, 0x27
};
static char otm1901a_dj_1080p_video_on_cmd_78[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xb0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_79[] = {
	0x09, 0x00, 0x29, 0xc0, 0xcc, 0x01, 0x02, 0x03,
	0x05, 0x06, 0x07, 0x04, 0x08, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_80[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xc0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_81[] = {
	0x0d, 0x00, 0x29, 0xc0, 0xcc, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x77, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_82[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xd0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_83[] = {
	0x0d, 0x00, 0x29, 0xc0, 0xcc, 0x00, 0x00, 0x00,
	0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x77, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_84[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_85[] = {
	0x10, 0x00, 0x29, 0xc0, 0xcb, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00
};
static char otm1901a_dj_1080p_video_on_cmd_86[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x90, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_87[] = {
	0x10, 0x00, 0x29, 0xc0, 0xcb, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00
};
static char otm1901a_dj_1080p_video_on_cmd_88[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xa0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_89[] = {
	0x10, 0x00, 0x29, 0xc0, 0xcb, 0x01, 0x01, 0x01,
	0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00
};
static char otm1901a_dj_1080p_video_on_cmd_90[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xb0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_91[] = {
	0x10, 0x00, 0x29, 0xc0, 0xcb, 0x00, 0x01, 0xfd,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00
};
static char otm1901a_dj_1080p_video_on_cmd_92[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xc0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_93[] = {
	0x09, 0x00, 0x29, 0xc0, 0xcb, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x77, 0x77, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_94[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xd0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_95[] = {
	0x09, 0x00, 0x29, 0xc0, 0xcb, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x77, 0x77, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_96[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xe0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_97[] = {
	0x09, 0x00, 0x29, 0xc0, 0xcb, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x77, 0x77, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_98[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xf0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_99[] = {
	0x09, 0x00, 0x29, 0xc0, 0xcb, 0x01, 0x01, 0x01,
	0x00, 0x00, 0x00, 0x77, 0x77, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_100[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_101[] = {
	0x10, 0x00, 0x29, 0xc0, 0xcd, 0x3f, 0x3f, 0x3f,
	0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x02, 0x12,
	0x11, 0x3f, 0x04, 0x3f
};
static char otm1901a_dj_1080p_video_on_cmd_102[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x90, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_103[] = {
	0x0c, 0x00, 0x29, 0xc0, 0xcd, 0x06, 0x3f, 0x3f,
	0x26, 0x26, 0x26, 0x21, 0x20, 0x1f, 0x26, 0x26
};
static char otm1901a_dj_1080p_video_on_cmd_104[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xa0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_105[] = {
	0x10, 0x00, 0x29, 0xc0, 0xcd, 0x3f, 0x3f, 0x3f,
	0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x01, 0x12,
	0x11, 0x3f, 0x03, 0x3f
};
static char otm1901a_dj_1080p_video_on_cmd_106[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xb0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_107[] = {
	0x0c, 0x00, 0x29, 0xc0, 0xcd, 0x05, 0x3f, 0x3f,
	0x26, 0x26, 0x26, 0x21, 0x20, 0x1f, 0x26, 0x26
};
static char otm1901a_dj_1080p_video_on_cmd_108[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_109[] = {
	0x19, 0x00, 0x29, 0xc0, 0xe1, 0x30, 0x35, 0x36,
	0x3a, 0x40, 0x44, 0x46, 0x52, 0x58, 0x66, 0x6c,
	0x72, 0x88, 0x81, 0x77, 0x60, 0x4d, 0x39, 0x2c,
	0x24, 0x12, 0x09, 0x06, 0x03, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_110[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_111[] = {
	0x19, 0x00, 0x29, 0xc0, 0xe2, 0x30, 0x35, 0x36,
	0x3a, 0x40, 0x44, 0x46, 0x52, 0x58, 0x66, 0x6c,
	0x72, 0x88, 0x81, 0x77, 0x60, 0x4d, 0x39, 0x2c,
	0x24, 0x12, 0x09, 0x06, 0x03, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_112[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_113[] = {
	0x19, 0x00, 0x29, 0xc0, 0xe3, 0x1c, 0x1d, 0x20,
	0x25, 0x28, 0x2c, 0x36, 0x43, 0x48, 0x59, 0x63,
	0x6c, 0x8d, 0x84, 0x7a, 0x63, 0x4d, 0x39, 0x2c,
	0x24, 0x1d, 0x11, 0x07, 0x03, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_114[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_115[] = {
	0x19, 0x00, 0x29, 0xc0, 0xe4, 0x1c, 0x1d, 0x20,
	0x25, 0x28, 0x2c, 0x36, 0x43, 0x48, 0x59, 0x63,
	0x6c, 0x8d, 0x84, 0x7a, 0x63, 0x4d, 0x39, 0x2c,
	0x24, 0x1d, 0x11, 0x07, 0x03, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_116[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_117[] = {
	0x19, 0x00, 0x29, 0xc0, 0xe5, 0x00, 0x07, 0x08,
	0x0d, 0x13, 0x1b, 0x25, 0x36, 0x40, 0x52, 0x5f,
	0x69, 0x8f, 0x86, 0x7b, 0x63, 0x4d, 0x39, 0x2c,
	0x24, 0x1e, 0x0d, 0x04, 0x03, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_118[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_119[] = {
	0x19, 0x00, 0x29, 0xc0, 0xe6, 0x00, 0x07, 0x08,
	0x0d, 0x13, 0x1b, 0x25, 0x36, 0x40, 0x52, 0x5f,
	0x69, 0x8f, 0x86, 0x7b, 0x63, 0x4c, 0x38, 0x30,
	0x20, 0x1e, 0x0d, 0x04, 0x03, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_120[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x81, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_121[] = {
	0x02, 0x00, 0x29, 0xc0, 0xa5, 0x07, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_122[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_123[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc4, 0x1a, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_124[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x9b, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_125[] = {
	0x03, 0x00, 0x29, 0xc0, 0xc5, 0x55, 0x50, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_126[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xf7, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_127[] = {
	0x05, 0x00, 0x29, 0xc0, 0xc3, 0x04, 0x16, 0x04,
	0x04, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_128[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xf2, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_129[] = {
	0x04, 0x00, 0x29, 0xc0, 0xc1, 0x80, 0x00, 0x00
};
static char otm1901a_dj_1080p_video_on_cmd_130[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x9d, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_131[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc5, 0x77, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_132[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xf7, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_133[] = {
	0x05, 0x00, 0x29, 0xc0, 0xc3, 0x00, 0xff, 0x00,
	0x00, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_134[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xf2, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_135[] = {
	0x04, 0x00, 0x29, 0xc0, 0xc1, 0x00, 0x00, 0x00
};
static char otm1901a_dj_1080p_video_on_cmd_136[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0xd0, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_137[] = {
	0x05, 0x00, 0x29, 0xc0, 0xf5, 0x00, 0x00, 0x00,
	0x00, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_138[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_139[] = {
	0x04, 0x00, 0x29, 0xc0, 0xff, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_140[] = {
	0x02, 0x00, 0x29, 0xc0, 0x51, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_141[] = {
	0x02, 0x00, 0x29, 0xc0, 0x53, 0x24, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_on_cmd_142[] = {
	0x11, 0x00, 0x05, 0x80
};
static char otm1901a_dj_1080p_video_on_cmd_143[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd otm1901a_dj_1080p_video_on_command[] = {
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_0), otm1901a_dj_1080p_video_on_cmd_0, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_1), otm1901a_dj_1080p_video_on_cmd_1, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_2), otm1901a_dj_1080p_video_on_cmd_2, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_3), otm1901a_dj_1080p_video_on_cmd_3, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_4), otm1901a_dj_1080p_video_on_cmd_4, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_5), otm1901a_dj_1080p_video_on_cmd_5, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_6), otm1901a_dj_1080p_video_on_cmd_6, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_7), otm1901a_dj_1080p_video_on_cmd_7, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_8), otm1901a_dj_1080p_video_on_cmd_8, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_9), otm1901a_dj_1080p_video_on_cmd_9, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_10), otm1901a_dj_1080p_video_on_cmd_10, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_11), otm1901a_dj_1080p_video_on_cmd_11, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_12), otm1901a_dj_1080p_video_on_cmd_12, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_13), otm1901a_dj_1080p_video_on_cmd_13, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_14), otm1901a_dj_1080p_video_on_cmd_14, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_15), otm1901a_dj_1080p_video_on_cmd_15, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_16), otm1901a_dj_1080p_video_on_cmd_16, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_17), otm1901a_dj_1080p_video_on_cmd_17, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_18), otm1901a_dj_1080p_video_on_cmd_18, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_19), otm1901a_dj_1080p_video_on_cmd_19, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_20), otm1901a_dj_1080p_video_on_cmd_20, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_21), otm1901a_dj_1080p_video_on_cmd_21, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_22), otm1901a_dj_1080p_video_on_cmd_22, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_23), otm1901a_dj_1080p_video_on_cmd_23, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_24), otm1901a_dj_1080p_video_on_cmd_24, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_25), otm1901a_dj_1080p_video_on_cmd_25, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_26), otm1901a_dj_1080p_video_on_cmd_26, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_27), otm1901a_dj_1080p_video_on_cmd_27, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_28), otm1901a_dj_1080p_video_on_cmd_28, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_29), otm1901a_dj_1080p_video_on_cmd_29, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_30), otm1901a_dj_1080p_video_on_cmd_30, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_31), otm1901a_dj_1080p_video_on_cmd_31, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_32), otm1901a_dj_1080p_video_on_cmd_32, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_33), otm1901a_dj_1080p_video_on_cmd_33, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_34), otm1901a_dj_1080p_video_on_cmd_34, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_35), otm1901a_dj_1080p_video_on_cmd_35, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_36), otm1901a_dj_1080p_video_on_cmd_36, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_37), otm1901a_dj_1080p_video_on_cmd_37, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_38), otm1901a_dj_1080p_video_on_cmd_38, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_39), otm1901a_dj_1080p_video_on_cmd_39, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_40), otm1901a_dj_1080p_video_on_cmd_40, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_41), otm1901a_dj_1080p_video_on_cmd_41, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_42), otm1901a_dj_1080p_video_on_cmd_42, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_43), otm1901a_dj_1080p_video_on_cmd_43, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_44), otm1901a_dj_1080p_video_on_cmd_44, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_45), otm1901a_dj_1080p_video_on_cmd_45, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_46), otm1901a_dj_1080p_video_on_cmd_46, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_47), otm1901a_dj_1080p_video_on_cmd_47, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_48), otm1901a_dj_1080p_video_on_cmd_48, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_49), otm1901a_dj_1080p_video_on_cmd_49, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_50), otm1901a_dj_1080p_video_on_cmd_50, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_51), otm1901a_dj_1080p_video_on_cmd_51, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_52), otm1901a_dj_1080p_video_on_cmd_52, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_53), otm1901a_dj_1080p_video_on_cmd_53, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_54), otm1901a_dj_1080p_video_on_cmd_54, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_55), otm1901a_dj_1080p_video_on_cmd_55, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_56), otm1901a_dj_1080p_video_on_cmd_56, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_57), otm1901a_dj_1080p_video_on_cmd_57, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_58), otm1901a_dj_1080p_video_on_cmd_58, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_59), otm1901a_dj_1080p_video_on_cmd_59, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_60), otm1901a_dj_1080p_video_on_cmd_60, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_61), otm1901a_dj_1080p_video_on_cmd_61, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_62), otm1901a_dj_1080p_video_on_cmd_62, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_63), otm1901a_dj_1080p_video_on_cmd_63, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_64), otm1901a_dj_1080p_video_on_cmd_64, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_65), otm1901a_dj_1080p_video_on_cmd_65, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_66), otm1901a_dj_1080p_video_on_cmd_66, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_67), otm1901a_dj_1080p_video_on_cmd_67, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_68), otm1901a_dj_1080p_video_on_cmd_68, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_69), otm1901a_dj_1080p_video_on_cmd_69, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_70), otm1901a_dj_1080p_video_on_cmd_70, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_71), otm1901a_dj_1080p_video_on_cmd_71, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_72), otm1901a_dj_1080p_video_on_cmd_72, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_73), otm1901a_dj_1080p_video_on_cmd_73, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_74), otm1901a_dj_1080p_video_on_cmd_74, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_75), otm1901a_dj_1080p_video_on_cmd_75, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_76), otm1901a_dj_1080p_video_on_cmd_76, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_77), otm1901a_dj_1080p_video_on_cmd_77, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_78), otm1901a_dj_1080p_video_on_cmd_78, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_79), otm1901a_dj_1080p_video_on_cmd_79, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_80), otm1901a_dj_1080p_video_on_cmd_80, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_81), otm1901a_dj_1080p_video_on_cmd_81, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_82), otm1901a_dj_1080p_video_on_cmd_82, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_83), otm1901a_dj_1080p_video_on_cmd_83, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_84), otm1901a_dj_1080p_video_on_cmd_84, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_85), otm1901a_dj_1080p_video_on_cmd_85, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_86), otm1901a_dj_1080p_video_on_cmd_86, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_87), otm1901a_dj_1080p_video_on_cmd_87, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_88), otm1901a_dj_1080p_video_on_cmd_88, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_89), otm1901a_dj_1080p_video_on_cmd_89, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_90), otm1901a_dj_1080p_video_on_cmd_90, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_91), otm1901a_dj_1080p_video_on_cmd_91, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_92), otm1901a_dj_1080p_video_on_cmd_92, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_93), otm1901a_dj_1080p_video_on_cmd_93, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_94), otm1901a_dj_1080p_video_on_cmd_94, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_95), otm1901a_dj_1080p_video_on_cmd_95, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_96), otm1901a_dj_1080p_video_on_cmd_96, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_97), otm1901a_dj_1080p_video_on_cmd_97, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_98), otm1901a_dj_1080p_video_on_cmd_98, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_99), otm1901a_dj_1080p_video_on_cmd_99, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_100), otm1901a_dj_1080p_video_on_cmd_100, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_101), otm1901a_dj_1080p_video_on_cmd_101, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_102), otm1901a_dj_1080p_video_on_cmd_102, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_103), otm1901a_dj_1080p_video_on_cmd_103, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_104), otm1901a_dj_1080p_video_on_cmd_104, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_105), otm1901a_dj_1080p_video_on_cmd_105, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_106), otm1901a_dj_1080p_video_on_cmd_106, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_107), otm1901a_dj_1080p_video_on_cmd_107, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_108), otm1901a_dj_1080p_video_on_cmd_108, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_109), otm1901a_dj_1080p_video_on_cmd_109, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_110), otm1901a_dj_1080p_video_on_cmd_110, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_111), otm1901a_dj_1080p_video_on_cmd_111, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_112), otm1901a_dj_1080p_video_on_cmd_112, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_113), otm1901a_dj_1080p_video_on_cmd_113, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_114), otm1901a_dj_1080p_video_on_cmd_114, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_115), otm1901a_dj_1080p_video_on_cmd_115, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_116), otm1901a_dj_1080p_video_on_cmd_116, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_117), otm1901a_dj_1080p_video_on_cmd_117, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_118), otm1901a_dj_1080p_video_on_cmd_118, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_119), otm1901a_dj_1080p_video_on_cmd_119, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_120), otm1901a_dj_1080p_video_on_cmd_120, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_121), otm1901a_dj_1080p_video_on_cmd_121, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_122), otm1901a_dj_1080p_video_on_cmd_122, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_123), otm1901a_dj_1080p_video_on_cmd_123, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_124), otm1901a_dj_1080p_video_on_cmd_124, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_125), otm1901a_dj_1080p_video_on_cmd_125, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_126), otm1901a_dj_1080p_video_on_cmd_126, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_127), otm1901a_dj_1080p_video_on_cmd_127, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_128), otm1901a_dj_1080p_video_on_cmd_128, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_129), otm1901a_dj_1080p_video_on_cmd_129, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_130), otm1901a_dj_1080p_video_on_cmd_130, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_131), otm1901a_dj_1080p_video_on_cmd_131, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_132), otm1901a_dj_1080p_video_on_cmd_132, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_133), otm1901a_dj_1080p_video_on_cmd_133, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_134), otm1901a_dj_1080p_video_on_cmd_134, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_135), otm1901a_dj_1080p_video_on_cmd_135, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_136), otm1901a_dj_1080p_video_on_cmd_136, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_137), otm1901a_dj_1080p_video_on_cmd_137, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_138), otm1901a_dj_1080p_video_on_cmd_138, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_139), otm1901a_dj_1080p_video_on_cmd_139, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_140), otm1901a_dj_1080p_video_on_cmd_140, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_141), otm1901a_dj_1080p_video_on_cmd_141, 0 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_142), otm1901a_dj_1080p_video_on_cmd_142, 120 },
	{ sizeof(otm1901a_dj_1080p_video_on_cmd_143), otm1901a_dj_1080p_video_on_cmd_143, 0 },
};

static char otm1901a_dj_1080p_video_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char otm1901a_dj_1080p_video_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};
static char otm1901a_dj_1080p_video_off_cmd_2[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_off_cmd_3[] = {
	0x05, 0x00, 0x29, 0xc0, 0xf7, 0x5a, 0xa5, 0x19,
	0x01, 0xff, 0xff, 0xff
};

static struct mipi_dsi_cmd otm1901a_dj_1080p_video_off_command[] = {
	{ sizeof(otm1901a_dj_1080p_video_off_cmd_0), otm1901a_dj_1080p_video_off_cmd_0, 50 },
	{ sizeof(otm1901a_dj_1080p_video_off_cmd_1), otm1901a_dj_1080p_video_off_cmd_1, 120 },
	{ sizeof(otm1901a_dj_1080p_video_off_cmd_2), otm1901a_dj_1080p_video_off_cmd_2, 0 },
	{ sizeof(otm1901a_dj_1080p_video_off_cmd_3), otm1901a_dj_1080p_video_off_cmd_3, 0 },
};

static struct command_state otm1901a_dj_1080p_video_state = {
	.oncommand_state = 0,
	.offcommand_state = 0,
};

static struct commandpanel_info otm1901a_dj_1080p_video_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info otm1901a_dj_1080p_video_video_panel = {
	.hsync_pulse = 1,
	.hfp_power_mode = 0,
	.hbp_power_mode = 0,
	.hsa_power_mode = 0,
	.bllp_eof_power_mode = 1,
	.bllp_power_mode = 1,
	.traffic_mode = 2,
	/* This is bllp_eof_power_mode and bllp_power_mode combined */
	.bllp_eof_power = 1 << 3 | 1 << 0,
};

static struct lane_configuration otm1901a_dj_1080p_video_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t otm1901a_dj_1080p_video_timings[] = {
	0xdb, 0x34, 0x22, 0x00, 0x64, 0x66, 0x28, 0x38, 0x2b, 0x03, 0x04, 0x00
};

static struct panel_timing otm1901a_dj_1080p_video_timing_info = {
	.tclk_post = 0x03,
	.tclk_pre = 0x29,
};

static struct panel_reset_sequence otm1901a_dj_1080p_video_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 20, 50, 50 },
	.pin_direction = 2,
};

static struct backlight otm1901a_dj_1080p_video_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 4095,
};

static inline void panel_otm1901a_dj_1080p_video_select(struct panel_struct *panel,
							struct msm_panel_info *pinfo,
							struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &otm1901a_dj_1080p_video_panel_data;
	panel->panelres = &otm1901a_dj_1080p_video_panel_res;
	panel->color = &otm1901a_dj_1080p_video_color;
	panel->videopanel = &otm1901a_dj_1080p_video_video_panel;
	panel->commandpanel = &otm1901a_dj_1080p_video_command_panel;
	panel->state = &otm1901a_dj_1080p_video_state;
	panel->laneconfig = &otm1901a_dj_1080p_video_lane_config;
	panel->paneltiminginfo = &otm1901a_dj_1080p_video_timing_info;
	panel->panelresetseq = &otm1901a_dj_1080p_video_reset_seq;
	panel->backlightinfo = &otm1901a_dj_1080p_video_backlight;
	pinfo->mipi.panel_on_cmds = otm1901a_dj_1080p_video_on_command;
	pinfo->mipi.panel_off_cmds = otm1901a_dj_1080p_video_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(otm1901a_dj_1080p_video_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(otm1901a_dj_1080p_video_off_command);
	memcpy(phy_db->timing, otm1901a_dj_1080p_video_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_OTM1901A_DJ_1080P_VIDEO_H_ */
