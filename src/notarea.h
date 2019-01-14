/*
 * notarea.h
 *
 * Copyright (C) 2019 - Dallen Wilson <dwjwilson@lavabit.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _NOTAREA_H
#define _NOTAREA_H

void docklet_x11_create(void);
void docklet_x11_destroy();
void docklet_x11_position_menu(GtkMenu *menu, int *x, int *y, gboolean *push_in, gpointer user_data);

#endif