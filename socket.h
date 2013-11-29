/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright (C) Simon Gomizelj, 2012
 */

#ifndef LIBENVOY_H
#define LIBENVOY_H

#include <sys/socket.h>

size_t init_envoy_socket(struct sockaddr_un *un);
void unlink_envoy_socket(void);

void safe_asprintf(char **strp, const char *fmt, ...);

#endif

// vim: et:sts=4:sw=4:cino=(0
