/* Copyright 2017 REPLACE_WITH_YOUR_NAME
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
#include "xd75.h"

// Fillers to make layering more clear
#define _______ KC_TRNS
#define ___T___ KC_TRNS

// Layer shorthand
#define _QW 0
#define _LW 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_QW] = { /* QWERTY */
  { KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS, KC_GRV,  KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC },
  { KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC, KC_BSLS, KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC },
  { KC_RCTRL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_PGUP, KC_HOME, KC_QUOT, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENTER },
  { KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_PGDN, KC_UP,   KC_END,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT },
  { KC_LCTRL, KC_LALT, KC_LALT, KC_LGUI, KC_SPC,  KC_SPC , KC_LEFT, KC_DOWN, KC_RGHT, KC_SPC,  KC_SPC,  KC_RGUI, MO(_LW), MO(_LW), KC_ENTER}
 },

 [_LW] = { /* LOWERED */
  { _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F11,  _______,  KC_F12, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_DEL  },
  { _______, RGB_TOG, RGB_HUD, RGB_HUI, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_PAUS, KC_INS  },
  { KC_CAPS, RGB_MOD, RGB_SAD, RGB_SAI, _______, _______, KC_MSTP, KC_MUTE, KC_MSTP, _______, _______, _______, _______, _______, _______ },
  { _______, RGB_RMOD,RGB_VAD, RGB_VAI, _______, _______, KC_MPLY, KC_VOLU, KC_MPLY, _______, _______, _______, _______, _______, _______ },
  { _______, _______, _______, _______, _______, _______, KC_MPRV, KC_VOLD, KC_MNXT, _______, _______, KC_APP,  _______, _______, _______ }
 },

};

const uint16_t PROGMEM fn_actions[] = {

};
