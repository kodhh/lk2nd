// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2026 FIXME
// Generated with linux-mdss-dsi-panel-driver-generator from vendor device tree:
//   Copyright (c) 2014, The Linux Foundation. All rights reserved. (FIXME)

#ifndef _PANEL_OTM1901A_DJ_1080P_VIDEO_OTP_H_
#define _PANEL_OTM1901A_DJ_1080P_VIDEO_OTP_H_

#include <mipi_dsi.h>
#include <panel_display.h>
#include <panel.h>
#include <string.h>

static struct panel_config otm1901a_dj_1080p_video_otp_panel_data = {
	.panel_node_id = "qcom,mdss_dsi_otm1901a_dj_1080p_video_otp",
	.panel_controller = "dsi:0:",
	.panel_compatible = "qcom,mdss-dsi-panel",
	.panel_type = 0,
	.panel_destination = "DISPLAY_1",
	/* .panel_orientation not supported yet */
	.panel_framerate = 59,
	.panel_lp11_init = 1,
	.panel_init_delay = 10000,
};

static struct panel_resolution otm1901a_dj_1080p_video_otp_panel_res = {
	.panel_width = 1080,
	.panel_height = 1920,
	.hfront_porch = 320,
	.hback_porch = 32,
	.hpulse_width = 4,
	.hsync_skew = 0,
	.vfront_porch = 14,
	.vback_porch = 9,
	.vpulse_width = 2,
	/* Borders not supported yet */
};

static struct color_info otm1901a_dj_1080p_video_otp_color = {
	.color_format = 24,
	.color_order = DSI_RGB_SWAP_RGB,
	.underflow_color = 0xff,
	/* Borders and pixel packing not supported yet */
};

static char otm1901a_dj_1080p_video_otp_on_cmd_0[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_otp_on_cmd_1[] = {
	0x04, 0x00, 0x29, 0xc0, 0xff, 0x19, 0x01, 0x01
};
static char otm1901a_dj_1080p_video_otp_on_cmd_2[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_otp_on_cmd_3[] = {
	0x03, 0x00, 0x29, 0xc0, 0xff, 0x19, 0x01, 0xff
};
static char otm1901a_dj_1080p_video_otp_on_cmd_4[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_otp_on_cmd_5[] = {
	0x02, 0x00, 0x29, 0xc0, 0x35, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_otp_on_cmd_6[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x80, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_otp_on_cmd_7[] = {
	0x02, 0x00, 0x29, 0xc0, 0xc4, 0x13, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_otp_on_cmd_8[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_otp_on_cmd_9[] = {
	0x04, 0x00, 0x29, 0xc0, 0xff, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_otp_on_cmd_10[] = {
	0x11, 0x00, 0x05, 0x80
};
static char otm1901a_dj_1080p_video_otp_on_cmd_11[] = {
	0x29, 0x00, 0x05, 0x80
};
static char otm1901a_dj_1080p_video_otp_on_cmd_12[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_otp_on_cmd_13[] = {
	0x03, 0x00, 0x29, 0xc0, 0x99, 0x11, 0x11, 0xff
};

static struct mipi_dsi_cmd otm1901a_dj_1080p_video_otp_on_command[] = {
	{ sizeof(otm1901a_dj_1080p_video_otp_on_cmd_0), otm1901a_dj_1080p_video_otp_on_cmd_0, 0 },
	{ sizeof(otm1901a_dj_1080p_video_otp_on_cmd_1), otm1901a_dj_1080p_video_otp_on_cmd_1, 0 },
	{ sizeof(otm1901a_dj_1080p_video_otp_on_cmd_2), otm1901a_dj_1080p_video_otp_on_cmd_2, 0 },
	{ sizeof(otm1901a_dj_1080p_video_otp_on_cmd_3), otm1901a_dj_1080p_video_otp_on_cmd_3, 0 },
	{ sizeof(otm1901a_dj_1080p_video_otp_on_cmd_4), otm1901a_dj_1080p_video_otp_on_cmd_4, 0 },
	{ sizeof(otm1901a_dj_1080p_video_otp_on_cmd_5), otm1901a_dj_1080p_video_otp_on_cmd_5, 0 },
	{ sizeof(otm1901a_dj_1080p_video_otp_on_cmd_6), otm1901a_dj_1080p_video_otp_on_cmd_6, 0 },
	{ sizeof(otm1901a_dj_1080p_video_otp_on_cmd_7), otm1901a_dj_1080p_video_otp_on_cmd_7, 0 },
	{ sizeof(otm1901a_dj_1080p_video_otp_on_cmd_8), otm1901a_dj_1080p_video_otp_on_cmd_8, 0 },
	{ sizeof(otm1901a_dj_1080p_video_otp_on_cmd_9), otm1901a_dj_1080p_video_otp_on_cmd_9, 0 },
	{ sizeof(otm1901a_dj_1080p_video_otp_on_cmd_10), otm1901a_dj_1080p_video_otp_on_cmd_10, 120 },
	{ sizeof(otm1901a_dj_1080p_video_otp_on_cmd_11), otm1901a_dj_1080p_video_otp_on_cmd_11, 0 },
	{ sizeof(otm1901a_dj_1080p_video_otp_on_cmd_12), otm1901a_dj_1080p_video_otp_on_cmd_12, 0 },
	{ sizeof(otm1901a_dj_1080p_video_otp_on_cmd_13), otm1901a_dj_1080p_video_otp_on_cmd_13, 0 },
};

static char otm1901a_dj_1080p_video_otp_off_cmd_0[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_otp_off_cmd_1[] = {
	0x03, 0x00, 0x29, 0xc0, 0x99, 0x95, 0x27, 0xff
};
static char otm1901a_dj_1080p_video_otp_off_cmd_2[] = {
	0x28, 0x00, 0x05, 0x80
};
static char otm1901a_dj_1080p_video_otp_off_cmd_3[] = {
	0x10, 0x00, 0x05, 0x80
};
static char otm1901a_dj_1080p_video_otp_off_cmd_4[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_otp_off_cmd_5[] = {
	0x05, 0x00, 0x29, 0xc0, 0xf7, 0x5a, 0xa5, 0x19,
	0x01, 0xff, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_otp_off_cmd_6[] = {
	0x02, 0x00, 0x29, 0xc0, 0x00, 0x00, 0xff, 0xff
};
static char otm1901a_dj_1080p_video_otp_off_cmd_7[] = {
	0x03, 0x00, 0x29, 0xc0, 0x99, 0x11, 0x11, 0xff
};

static struct mipi_dsi_cmd otm1901a_dj_1080p_video_otp_off_command[] = {
	{ sizeof(otm1901a_dj_1080p_video_otp_off_cmd_0), otm1901a_dj_1080p_video_otp_off_cmd_0, 0 },
	{ sizeof(otm1901a_dj_1080p_video_otp_off_cmd_1), otm1901a_dj_1080p_video_otp_off_cmd_1, 0 },
	{ sizeof(otm1901a_dj_1080p_video_otp_off_cmd_2), otm1901a_dj_1080p_video_otp_off_cmd_2, 50 },
	{ sizeof(otm1901a_dj_1080p_video_otp_off_cmd_3), otm1901a_dj_1080p_video_otp_off_cmd_3, 120 },
	{ sizeof(otm1901a_dj_1080p_video_otp_off_cmd_4), otm1901a_dj_1080p_video_otp_off_cmd_4, 0 },
	{ sizeof(otm1901a_dj_1080p_video_otp_off_cmd_5), otm1901a_dj_1080p_video_otp_off_cmd_5, 0 },
	{ sizeof(otm1901a_dj_1080p_video_otp_off_cmd_6), otm1901a_dj_1080p_video_otp_off_cmd_6, 0 },
	{ sizeof(otm1901a_dj_1080p_video_otp_off_cmd_7), otm1901a_dj_1080p_video_otp_off_cmd_7, 0 },
};

static struct command_state otm1901a_dj_1080p_video_otp_state = {
	.oncommand_state = 0,
	.offcommand_state = 0,
};

static struct commandpanel_info otm1901a_dj_1080p_video_otp_command_panel = {
	/* Unused, this is a video mode panel */
};

static struct videopanel_info otm1901a_dj_1080p_video_otp_video_panel = {
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

static struct lane_configuration otm1901a_dj_1080p_video_otp_lane_config = {
	.dsi_lanes = 4,
	.dsi_lanemap = 0,
	.lane0_state = 1,
	.lane1_state = 1,
	.lane2_state = 1,
	.lane3_state = 1,
	.force_clk_lane_hs = 0,
};

static const uint32_t otm1901a_dj_1080p_video_otp_timings[] = {
	0x04, 0x3e, 0x2a, 0x01, 0x70, 0x76, 0x2e, 0x42, 0x33, 0x03, 0x04, 0x00
};

static struct panel_timing otm1901a_dj_1080p_video_otp_timing_info = {
	.tclk_post = 0x02,
	.tclk_pre = 0x2f,
};

static struct panel_reset_sequence otm1901a_dj_1080p_video_otp_reset_seq = {
	.pin_state = { 1, 0, 1 },
	.sleep = { 10, 10, 10 },
	.pin_direction = 2,
};

static struct backlight otm1901a_dj_1080p_video_otp_backlight = {
	.bl_interface_type = BL_WLED,
	.bl_min_level = 1,
	.bl_max_level = 4095,
};

static inline void panel_otm1901a_dj_1080p_video_otp_select(struct panel_struct *panel,
							    struct msm_panel_info *pinfo,
							    struct mdss_dsi_phy_ctrl *phy_db)
{
	panel->paneldata = &otm1901a_dj_1080p_video_otp_panel_data;
	panel->panelres = &otm1901a_dj_1080p_video_otp_panel_res;
	panel->color = &otm1901a_dj_1080p_video_otp_color;
	panel->videopanel = &otm1901a_dj_1080p_video_otp_video_panel;
	panel->commandpanel = &otm1901a_dj_1080p_video_otp_command_panel;
	panel->state = &otm1901a_dj_1080p_video_otp_state;
	panel->laneconfig = &otm1901a_dj_1080p_video_otp_lane_config;
	panel->paneltiminginfo = &otm1901a_dj_1080p_video_otp_timing_info;
	panel->panelresetseq = &otm1901a_dj_1080p_video_otp_reset_seq;
	panel->backlightinfo = &otm1901a_dj_1080p_video_otp_backlight;
	pinfo->mipi.panel_on_cmds = otm1901a_dj_1080p_video_otp_on_command;
	pinfo->mipi.panel_off_cmds = otm1901a_dj_1080p_video_otp_off_command;
	pinfo->mipi.num_of_panel_on_cmds = ARRAY_SIZE(otm1901a_dj_1080p_video_otp_on_command);
	pinfo->mipi.num_of_panel_off_cmds = ARRAY_SIZE(otm1901a_dj_1080p_video_otp_off_command);
	memcpy(phy_db->timing, otm1901a_dj_1080p_video_otp_timings, TIMING_SIZE);
	phy_db->regulator_mode = DSI_PHY_REGULATOR_DCDC_MODE;
}

#endif /* _PANEL_OTM1901A_DJ_1080P_VIDEO_OTP_H_ */
