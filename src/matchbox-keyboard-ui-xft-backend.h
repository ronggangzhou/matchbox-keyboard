/*
 *  Matchbox Keyboard - A lightweight software keyboard.
 *
 *  Authored By Matthew Allum <mallum@o-hand.com>
 *
 *  Copyright (c) 2005-2012 Intel Corp
 *
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms and conditions of the GNU Lesser General Public License,
 *  version 2.1, as published by the Free Software Foundation.
 *
 *  This program is distributed in the hope it will be useful, but WITHOUT ANY
 *  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 *  FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
 *  more details.
 *
 */

#ifndef HAVE_MB_KEYBOARD_UI_BACKEND_XFT_H
#define HAVE_MB_KEYBOARD_UI_BACKEND_XFT_H

#include "matchbox-keyboard.h"
#include <X11/Xft/Xft.h>

MBKeyboardUIBackend*
mb_kbd_ui_xft_init(MBKeyboardUI *ui);

#define MB_KBD_UI_BACKEND_INIT_FUNC(ui)  mb_kbd_ui_xft_init((ui))

#endif
