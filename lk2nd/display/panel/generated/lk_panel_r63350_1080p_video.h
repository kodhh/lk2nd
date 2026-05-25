// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2026 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_R63350_1080P_VIDEO_H_
#define _PANEL_R63350_1080P_VIDEO_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config r63350_1080p_video_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_r63350_1080p_video",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 59,
	.panel_lp11_init = 1,
	.panel_init_delay = 50000,
};

static struct panel_resolution r63350_1080p_video_panel_res = {
	.panel_width = 1080,
	.panel_height = 1920,
	.hfront_porch = 320,
	.hback_porch = 36,
	.hpulse_width = 12,
	.hsync_skew = 0,
	.vfront_porch = 4,
	.vback_porch = 4,
	.vpulse_width = 2,
	/* Borders not supported yet */
};

static struct color_info r63350_1080p_video_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char r63350_1080p_video_on_cmd_0[] = {
	0xb0, 0x04, 0x23, 0x80
};
static char r63350_1080p_video_on_cmd_1[] = {
	0x07, 0x00, 0x29, 0xc0, 0xb3, 0x14, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xff
};
static char r63350_1080p_video_on_cmd_2[] = {
	0x03, 0x00, 0x29, 0xc0, 0xb4, 0x0c, 0x00, 0xff
};
static char r63350_1080p_video_on_cmd_3[] = {
	0x04, 0x00, 0x29, 0xc0, 0xb6, 0x4b, 0xdb, 0x16
};
static char r63350_1080p_video_on_cmd_4[] = {
	0x08, 0x00, 0x29, 0xc0, 0xb8, 0x57, 0x3d, 0x19,
	0x1e, 0x0a, 0x50, 0x50
};
static char r63350_1080p_video_on_cmd_5[] = {
	0x08, 0x00, 0x29, 0xc0, 0xb9, 0x6f, 0x3d, 0x28,
	0x3c, 0x14, 0xc8, 0xc8
};
static char r63350_1080p_video_on_cmd_6[] = {
	0x08, 0x00, 0x29, 0xc0, 0xba, 0xb5, 0x33, 0x41,
	0x64, 0x23, 0xa0, 0xa0
};
static char r63350_1080p_video_on_cmd_7[] = {
	0x03, 0x00, 0x29, 0xc0, 0xbb, 0x14, 0x14, 0xff
};
static char r63350_1080p_video_on_cmd_8[] = {
	0x03, 0x00, 0x29, 0xc0, 0xbc, 0x37, 0x32, 0xff
};
static char r63350_1080p_video_on_cmd_9[] = {
	0x03, 0x00, 0x29, 0xc0, 0xbd, 0x64, 0x32, 0xff
};
static char r63350_1080p_video_on_cmd_10[] = {
	0xc0, 0x00, 0x23, 0x80
};
static char r63350_1080p_video_on_cmd_11[] = {
	0x23, 0x00, 0x29, 0xc0, 0xc1, 0x04, 0x60, 0x00,
	0x40, 0x10, 0x00, 0x58, 0x03, 0x00, 0x00, 0x00,
	0x64, 0x84, 0x30, 0x4a, 0x00, 0x00, 0x9d, 0xc1,
	0x01, 0x00, 0xca, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x42, 0x00, 0x02, 0x20, 0x03, 0x98, 0xff
};
static char r63350_1080p_video_on_cmd_12[] = {
	0x09, 0x00, 0x29, 0xc0, 0xc2, 0x31, 0xf7, 0x80,
	0x06, 0x08, 0x00, 0x00, 0x08, 0xff, 0xff, 0xff
};
static char r63350_1080p_video_on_cmd_13[] = {
	0x04, 0x00, 0x29, 0xc0, 0xc3, 0x00, 0x00, 0x00
};
static char r63350_1080p_video_on_cmd_14[] = {
	0x0c, 0x00, 0x29, 0xc0, 0xc4, 0x70, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x06
};
static char r63350_1080p_video_on_cmd_15[] = {
	0x16, 0x00, 0x29, 0xc0, 0xc6, 0x77, 0x01, 0x6e,
	0x02, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x19,
	0x0a, 0x77, 0xff, 0xff
};
static char r63350_1080p_video_on_cmd_16[] = {
	0x1f, 0x00, 0x29, 0xc0, 0xc7, 0x00, 0x16, 0x1d,
	0x25, 0x32, 0x3e, 0x48, 0x56, 0x39, 0x40, 0x4b,
	0x57, 0x61, 0x68, 0x77, 0x00, 0x16, 0x1d, 0x25,
	0x32, 0x3e, 0x48, 0x56, 0x39, 0x40, 0x4b, 0x57,
	0x61, 0x68, 0x77, 0xff
};
static char r63350_1080p_video_on_cmd_17[] = {
	0x10, 0x00, 0x29, 0xc0, 0xcb, 0xe6, 0xe0, 0xc7,
	0x63, 0x00, 0x00, 0x00, 0x00, 0x20, 0xe0, 0x87,
	0x00, 0xe8, 0x00, 0x00
};
static char r63350_1080p_video_on_cmd_18[] = {
	0xcc, 0x06, 0x23, 0x80
};
static char r63350_1080p_video_on_cmd_19[] = {
	0x1a, 0x00, 0x29, 0xc0, 0xce, 0x55, 0x40, 0x49,
	0x53, 0x59, 0x5e, 0x63, 0x68, 0x6e, 0x74, 0x7e,
	0x8a, 0x98, 0xa8, 0xbb, 0xd0, 0xff, 0x04, 0x00,
	0x04, 0x04, 0x42, 0x00, 0x69, 0x5a, 0xff, 0xff
};
static char r63350_1080p_video_on_cmd_20[] = {
	0x0b, 0x00, 0x29, 0xc0, 0xd0, 0x11, 0x00, 0x00,
	0x56, 0xcb, 0x40, 0x19, 0x19, 0x09, 0x00, 0xff
};
static char r63350_1080p_video_on_cmd_21[] = {
	0x05, 0x00, 0x29, 0xc0, 0xd1, 0x00, 0x48, 0x16,
	0x0f, 0xff, 0xff, 0xff
};
static char r63350_1080p_video_on_cmd_22[] = {
	0x1b, 0x00, 0x29, 0xc0, 0xd3, 0x1b, 0x33, 0x99,
	0xbb, 0xb3, 0x33, 0x33, 0x33, 0x11, 0x00, 0x01,
	0x00, 0x00, 0xe8, 0xa0, 0x02, 0x2f, 0x27, 0x33,
	0x33, 0x72, 0x12, 0x8a, 0x57, 0x3d, 0xbc, 0xff
};
static char r63350_1080p_video_on_cmd_23[] = {
	0x05, 0x00, 0x29, 0xc0, 0xd4, 0x41, 0x04, 0x00,
	0xd5, 0xff, 0xff, 0xff
};
static char r63350_1080p_video_on_cmd_24[] = {
	0xd6, 0x01, 0x23, 0x80
};
static char r63350_1080p_video_on_cmd_25[] = {
	0x19, 0x00, 0x29, 0xc0, 0xd7, 0xbf, 0xf8, 0x7f,
	0xa8, 0xce, 0x3e, 0xfc, 0xc1, 0xe1, 0xef, 0x83,
	0x07, 0x3f, 0x10, 0x7f, 0xc0, 0x01, 0xe7, 0x40,
	0x3c, 0x00, 0xc0, 0x00, 0x00, 0xff, 0xff, 0xff
};
static char r63350_1080p_video_on_cmd_26[] = {
	0x04, 0x00, 0x29, 0xc0, 0xd9, 0x20, 0x00, 0x14
};
static char r63350_1080p_video_on_cmd_27[] = {
	0x05, 0x00, 0x29, 0xc0, 0xdd, 0x30, 0x06, 0x23,
	0x65, 0xff, 0xff, 0xff
};
static char r63350_1080p_video_on_cmd_28[] = {
	0x05, 0x00, 0x29, 0xc0, 0xde, 0x00, 0x3f, 0xff,
	0x10, 0xff, 0xff, 0xff
};
static char r63350_1080p_video_on_cmd_29[] = {
	0x29, 0x00, 0x15, 0x80
};
static char r63350_1080p_video_on_cmd_30[] = {
	0x11, 0x00, 0x15, 0x80
};

static struct mipi_dsi_cmd r63350_1080p_video_on_command[] = {
	{ sizeof(r63350_1080p_video_on_cmd_0), r63350_1080p_video_on_cmd_0, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_1), r63350_1080p_video_on_cmd_1, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_2), r63350_1080p_video_on_cmd_2, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_3), r63350_1080p_video_on_cmd_3, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_4), r63350_1080p_video_on_cmd_4, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_5), r63350_1080p_video_on_cmd_5, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_6), r63350_1080p_video_on_cmd_6, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_7), r63350_1080p_video_on_cmd_7, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_8), r63350_1080p_video_on_cmd_8, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_9), r63350_1080p_video_on_cmd_9, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_10), r63350_1080p_video_on_cmd_10, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_11), r63350_1080p_video_on_cmd_11, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_12), r63350_1080p_video_on_cmd_12, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_13), r63350_1080p_video_on_cmd_13, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_14), r63350_1080p_video_on_cmd_14, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_15), r63350_1080p_video_on_cmd_15, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_16), r63350_1080p_video_on_cmd_16, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_17), r63350_1080p_video_on_cmd_17, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_18), r63350_1080p_video_on_cmd_18, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_19), r63350_1080p_video_on_cmd_19, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_20), r63350_1080p_video_on_cmd_20, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_21), r63350_1080p_video_on_cmd_21, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_22), r63350_1080p_video_on_cmd_22, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_23), r63350_1080p_video_on_cmd_23, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_24), r63350_1080p_video_on_cmd_24, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_25), r63350_1080p_video_on_cmd_25, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_26), r63350_1080p_video_on_cmd_26, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_27), r63350_1080p_video_on_cmd_27, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_28), r63350_1080p_video_on_cmd_28, 0 },
	{ sizeof(r63350_1080p_video_on_cmd_29), r63350_1080p_video_on_cmd_29, 32 },
	{ sizeof(r63350_1080p_video_on_cmd_30), r63350_1080p_video_on_cmd_30, 128 },
};

static char r63350_1080p_video_off_cmd_0[] = {
	0x28, 0x00, 0x05, 0x80
};
static char r63350_1080p_video_off_cmd_1[] = {
	0x10, 0x00, 0x05, 0x80
};
static char r63350_1080p_video_off_cmd_2[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb0, 0x04, 0xff, 0xff
};
static char r63350_1080p_video_off_cmd_3[] = {
	0x02, 0x00, 0x29, 0xc0, 0xb1, 0x01, 0xff, 0xff
};

static struct mipi_dsi_cmd r63350_1080p_video_off_command[] = {
	{ sizeof(r63350_1080p_video_off_cmd_0), r63350_1080p_video_off_cmd_0, 16 },
	{ sizeof(r63350_1080p_video_off_cmd_1), r63350_1080p_video_off_cmd_1, 120 },
	{ sizeof(r63350_1080p_video_off_cmd_2), r63350_1080p_video_off_cmd_2, 0 },
	{ sizeof(r63350_1080p_video_off_cmd_3), r63350_1080p_video_off_cmd_3, 0 },
};

static struct command_state r63350_1080p_video_state = {
	.oncommand_state = 0,
	.offcommand_state = 1,
};

static struct commandpanel_info r63350_1080p_video_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info r63350_1080p_video_video_panel = {
	.hsync_pulse = 1,
	.hfp_power_mode = 1,
	.hbp_power_mode = 0,
	.hsa_power_mode = 0,
	.bllp_eof_power_mode = 1,
	.bllp_power_mode = 1,
	.traffic_mode = 2,
	/* This is bllp_eof_power_mode and bllp_power_mode combined */
	.bllp_eof_power = 1 << 3 | 1 << 0,
};

static struct lane_configuration r63350_1080p_video_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t r63350_1080p_video_timings[] = {
	0x04, 0x3e, 0x2a, 0x01, 0x70, 0x76, 0x2e, 0x42, 0x33, 0x03, 0x04, 0x00
};

static struct panel_timing r63350_1080p_video_timing_info = {
	.tclk_post = 0x02,
	.tclk_pre = 0x2f,
};

static struct panel_reset_sequence r63350_1080p_video_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 10, 10, 20 },
	.pin_direction = 2,
};

static struct backlight r63350_1080p_video_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 4095,
};

static inline void panel_r63350_1080p_video_select(struct panel_struct *panel,
						   struct msm_panel_info *pinfo,
						   struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &r63350_1080p_video_panel_data;
	panel->panelres = &r63350_1080p_video_panel_res;
	panel->color = &r63350_1080p_video_color;
	panel->videopanel = &r63350_1080p_video_video_panel;
	panel->commandpanel = &r63350_1080p_video_command_panel;
	panel->state = &r63350_1080p_video_state;
	panel->laneconfig = &r63350_1080p_video_lane_config;
	panel->paneltiminginfo = &r63350_1080p_video_timing_info;
	panel->panelresetseq = &r63350_1080p_video_reset_seq;
	panel->backlightinfo = &r63350_1080p_video_backlight;
	pinfo->mipi.panel_on_cmds = r63350_1080p_video_on_command;
	pinfo->mipi.panel_off_cmds = r63350_1080p_video_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(r63350_1080p_video_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(r63350_1080p_video_off_command);
	memcpy(phy_db->timing, r63350_1080p_video_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_R63350_1080P_VIDEO_H_ */
