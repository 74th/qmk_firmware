/*
Copyright 2021 Atsushi Morimoto @74th

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xDA74
#define PRODUCT_ID   0x7462
#define DEVICE_VER   0x0001
#define MANUFACTURER Atsushi_Morimoto_74th
#define PRODUCT      dive9

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 9

// wiring of each half
#define MATRIX_ROW_PINS { B3, B2 }
#define MATRIX_COL_PINS { D1, D0, D4, C6, D7, E6, B4, B5, B6 }

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define JOYSTICK_BUTTON_COUNT 15
#define JOYSTICK_AXES_COUNT 2

#define RGB_DI_PIN D3
#define RGBLED_NUM 9
// #define RGBLIGHT_DEFAULT_VAL 10
#define RGBLIGHT_DEFAULT_HUE 180

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
