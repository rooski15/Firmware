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
#include QMK_KEYBOARD_H

#define _____ KC_NO
#define RSSL RSFT(KC_SLSH)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 /* Base
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐	┌───┬───┬───┬───┐
 * │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0a │0b │0c │0d     │	│00 │01 │02 │03 │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤	├───┼───┼───┼───┤
 * │10   │11 │12 │13 │14 │15 │16 │17 │18 │19 │1a │1b │1c │1d   │	│10 │11 │12 │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤	├───┼───┼───┤13 │	
 * │20    │21 │22 │23 │24 │25 │26 │27 │28 │29 │2a │2b │2c      │	│20 │21 │22 │   │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┬───┤	├───┼───┼───┼───┤
 * │30      │32 │33 │34 │35 │36 │37 │38 │39 │3a │3b    │3c │3d │	│30 │31 │32 │   │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬───┼───┼───┤	├───┴───┼───┤33 │
 * │40  │41  │42  │46       (6.25)         │49 │4a │4b │4c │4d │	│40     │42 │   │
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┘	└───────┴───┴───┘
 */
    [0] = LAYOUT_all(
		KC_ESC,  KC_1,    KC_2,    KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,	KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
		KC_TAB,  KC_Q,    KC_W,    KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, 			KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
		KC_CAPS, KC_A,    KC_S,    KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,    KC_SCLN, KC_QUOT, KC_ENT, 					KC_P4,   KC_P5,   KC_P6,   _____,
		KC_LSFT, KC_NO,   KC_Z,    KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT,  RSSL,    KC_UP,   MO(2), 			KC_P1,	 KC_P2,   KC_P3,   KC_PENT,
		KC_LCTL, KC_LGUI, KC_LALT,                      KC_SPC,   			 KC_RALT, MO(1),   KC_LEFT, KC_DOWN, KC_RIGHT,			KC_P0,   _____,   KC_PDOT, _____),
 
 
     [1] = LAYOUT_all(
		KC_GRV,  KC_F1,   KC_F2,   KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_DEL,	KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
		KC_TAB,  KC_Q,    KC_W,    KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, 			KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
		KC_CAPS, KC_A,    KC_S,    KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,    KC_SCLN, KC_QUOT, KC_ENT, 					KC_P4,   KC_P5,   KC_P6,   _____,
		KC_LSFT, KC_NO,   KC_Z,    KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT,  RSSL,    KC_UP,   MO(2), 			KC_P1,	 KC_P2,   KC_P3,   KC_PENT,
		KC_LCTL, KC_LGUI, KC_LALT,                      KC_SPC,   			 KC_RALT, MO(1),   KC_LEFT, KC_DOWN, KC_RIGHT,			KC_P0,   _____,   KC_PDOT, _____),
 
     [2] = LAYOUT_all(
		RESET,  KC_F1,   KC_F2,   KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_DEL,	KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
		KC_TAB,  KC_Q,    KC_W,    KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, 			KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
		KC_CAPS, KC_A,    KC_S,    KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,    KC_SCLN, KC_QUOT, KC_ENT, 					KC_P4,   KC_P5,   KC_P6,   _____,
		KC_LSFT, KC_NO,   KC_Z,    KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT,  RSSL,    KC_UP,   MO(2), 			KC_P1,	 KC_P2,   KC_P3,   KC_PENT,
		KC_LCTL, KC_LGUI, KC_LALT,                      KC_SPC,   			 KC_RALT, MO(1),   KC_LEFT, KC_DOWN, KC_RIGHT,			KC_P0,   _____,   KC_PDOT, _____)

};