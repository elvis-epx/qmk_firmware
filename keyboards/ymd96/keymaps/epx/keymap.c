/*
Base Copyright 2017 Luiz Ribeiro <luizribeiro@gmail.com>
     Copyright 2017 Andrew Novak <ndrw.nvk@gmail.com>
Modified Copyright 2018 Elvis Pfutzenreuter <elvis.pfutzenreuter@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public LicensezZZ
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define _DEFLT 0
#define _LNX  1
#define _AR 2
#define _RAISE 3
#define _RST 4

#define KEYMAP LAYOUT_default

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Layer 0, default layer
   *  | Esc  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 | PrtSc |ScrLck|Pause|  vol- | vol+ | play |
   *  |  ~`  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |    0 |    - |    = |    BkSpc    |NumLck|   /  |   *  |   -   |
   *  |   Tab   |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |    P |    { |    } |     \    |  7   |   8  |   9  |       |
   *  |   Ctrl    |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |    ; |   '  |     Return    |  4   |   5  |   6  |   +   |
   *  |    LShft     |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |       RShft       |  1   |   2  |   3  |       | 
   *  | Ctrl  |  Alt  |  Win  |                  Space                      |  Win  |  Fn   |  Alt  |   Ctrl   |      0      |   .  | Enter |
   * 
   * Layout is inspired on Model F.
   * Extra keys on top right, as well as some seldom-used keys, are media keys in default layer.
   * Num Lock toogles layer, so the numeric block works as a Model F navigation block in a Mac.
   * Numpad generates KC_n instead of KC_Pn codes to guarantee they will be interpreted as
   * intended, regardless of Num Lock status.
   * (Fn-Num Lock operates as conventional Num Lock in case of need.)
   * Caps Lock operates normally but it takes FN to work, the key is Ctrl by default, like in Model F.
   */
  [_DEFLT] = KEYMAP(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_PSCR, KC_SLCK, KC_PAUSE, KC_VOLD, KC_VOLU, KC_MPLY,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS, KC_EQL,  KC_BSPC,          TO(_AR),  KC_PSLS, KC_PAST, KC_PMNS,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC, KC_RBRC, KC_BSLS,          KC_7,     KC_8,    KC_9,    KC_PPLS,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT, KC_ENT,                    KC_4,     KC_5,    KC_6,    KC_PPLS,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,                            KC_1,     KC_2,    KC_3,    KC_PENT,
    KC_LCTL, KC_LALT,KC_LGUI,                     KC_SPC,                   KC_RGUI, KC_NO,   KC_RALT,  KC_RCTL, MO(_RAISE),                KC_0,     KC_0,    KC_DOT
  ),

  [_LNX] = KEYMAP(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,          _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,          _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______,                   _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,                            _______, _______, _______, _______,
    KC_LCTL, KC_LALT,KC_LCTL,                     KC_SPC,                   KC_RCTL, KC_NO,   KC_RALT,  KC_RGUI, MO(_RAISE),                KC_0,     KC_0,    KC_DOT
  ),

  /* Num Lock activated 
   *  ...
   *  ... 
   *  ... | Home |  Up  | Pg Up |       |
   *  ... | Left | (no) | Right |   +   |
   *  ... | End  | Down | Pg Dn |       |
   *  ... |     Ins     |  Del  | Enter |
   */
  [_AR] = KEYMAP(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,       TO(_DEFLT), _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,          KC_HOME, KC_UP,   KC_PGUP, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______,                   KC_LEFT, KC_NO,   KC_RGHT, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,                            KC_END,  KC_DOWN, KC_PGDN, _______,
    _______, _______, _______,                   _______,                   _______, _______, _______,  _______, _______,                   KC_INS,  KC_INS,  KC_DEL
  ),

  /* Raise layer
   *  | Reset-A  |      |      |      |      |      |      |      |      |      |      |      |      |      |      |      | prev | next | stop  |
   *  |          | RGB Toggle | RGB Hue - | RGB Hue + |   |   |   |   |   |   |    |      |      |     Del     |NumLck|      |      |       |
   *  |          | RGB Mode + | RGB Satu- | RGB Satu+  |   |   |   |   |   |   |      |      |      |          |      |      |      |       |
   *  | Caps Lck | RGB Mode - | RGB Brgt- | RGB Brgt+   |   |   |   |   |   |   |   |   |     |                |      |      |      |       |
   *  |              |      |      |      |      |      |      |      |      |      |      |                   |      |      |      |       |
   *  |       |       |       |                                             | Win Menu  |      |        |      |             |      |       |
   */ 
  [_RAISE] = KEYMAP(
    MO(_RST),_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, KC_MPRV, KC_MNXT, KC_MSTP,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL,            KC_NLCK, _______, _______, _______,
    _______, RGB_TOG, RGB_HUD, RGB_HUI, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______,
    KC_CAPS, RGB_MOD, RGB_SAD, RGB_SAI, _______, _______, _______, _______, _______, _______, _______,  _______, _______,                   _______, _______, _______, _______,
    _______, RGB_RMOD,RGB_VAD, RGB_VAI, _______, _______, _______, _______, _______, _______, _______, _______,                             _______, _______, _______, _______,
    _______, _______,_______,                     _______,                  KC_APP,  _______,    _______,  _______,  _______,               _______, _______, _______
  ),

  /* Layer just to put keyboard in bootloader mode via Fn-ESC-Backspace */
  [_RST] = KEYMAP(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,             _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                             _______, _______, _______, _______,
    _______, _______,_______,                     _______,                  _______, _______,    _______,  _______,  _______,               _______, _______, _______
  ),

};
