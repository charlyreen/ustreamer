/*****************************************************************************
#                                                                            #
#    uStreamer - Lightweight and fast MJPEG-HTTP streamer.                   #
#                                                                            #
#    Copyright (C) 2018-2022  Maxim Devaev <mdevaev@gmail.com>               #
#                                                                            #
#    This program is free software: you can redistribute it and/or modify    #
#    it under the terms of the GNU General Public License as published by    #
#    the Free Software Foundation, either version 3 of the License, or       #
#    (at your option) any later version.                                     #
#                                                                            #
#    This program is distributed in the hope that it will be useful,         #
#    but WITHOUT ANY WARRANTY; without even the implied warranty of          #
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           #
#    GNU General Public License for more details.                            #
#                                                                            #
#    You should have received a copy of the GNU General Public License       #
#    along with this program.  If not, see <https://www.gnu.org/licenses/>.  #
#                                                                            #
*****************************************************************************/


#pragma once

#include <stdlib.h>
#include <string.h>

#include <janus/config.h>
#include <janus/plugins/plugin.h>

#include "uslibs/tools.h"

#include "const.h"
#include "logging.h"


typedef struct {
	char	*video_sink_name;
	bool	video_zero_playout_delay;

	char	*audio_dev_name;
	char	*tc358743_dev_path;
} plugin_config_s;


// config_init() conflicts with something
plugin_config_s *plugin_config_init(const char *config_dir_path);
void plugin_config_destroy(plugin_config_s *config);
