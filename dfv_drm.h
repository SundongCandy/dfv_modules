/*
 * Device File-based I/O Virtualization (DFV)
 * File: dfv_drm.h
 *
 * Copyright (c) 2014 Rice University, Houston, TX, USA
 * All rights reserved.
 *
 * Authors: Ardalan Amiri Sani <arrdalan@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

extern int (*dfv_drm_setcrtc)(uint32_t new_fb_id, uint32_t prev_fb_id, bool is_dfv);
extern int (*dfv_drm_rmfb)(uint32_t fb_id);

struct drm_info_struct
{
	uint32_t fb_id;
	uint32_t prev_fb_id;
	bool fg;
	struct guest_struct *guest;
	struct list_head list;
};

void dfv_drm_use_full(void);
extern struct guest_struct *(*get_fg_guest)(void);
