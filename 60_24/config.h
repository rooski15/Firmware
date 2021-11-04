/* Copyright 2021 Andrew Heaston
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4792
#define PRODUCT_ID      0x1230
#define DEVICE_VER      0x0100
#define MANUFACTURER    Rooski
#define PRODUCT         60_24 Split

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 14

#define DIODE_DIRECTION COL2ROW
// wiring of each half
#define MATRIX_ROW_PINS { B1, B2, C7, B4, D7 }
#define MATRIX_COL_PINS { F4, B0, F0, B7, B3, D2, D3, D5, D4, F5, F6, D6, C6, D1 }
#define MATRIX_ROW_PINS_RIGHT { B1, B2, C7, B4, D7 }
#define MATRIX_COL_PINS_RIGHT { F4, B0, F0, B7}
//#define EE_HANDS
#define SPLIT_HAND_PIN F7

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
