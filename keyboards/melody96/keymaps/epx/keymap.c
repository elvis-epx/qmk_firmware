#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /*
   * Layout is inspired on Model F.
   * Num Lock toogles layer, so the numeric block works as a Model F navigation block even in a Mac.
   * Caps Lock operates normally but it takes FN to work, the key is Ctrl by default, like in Model F.
   */
	LAYOUT_hotswap(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, KC_INS,   KC_PSCR, KC_SLCK, KC_PAUS, MO(2),
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          TO(1),   KC_VOLD, KC_MUTE, KC_VOLU,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_7,    KC_8,   KC_9,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                    KC_4,    KC_5,   KC_6,     KC_PPLS,
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_1,    KC_2,   KC_3,
    KC_LCTL, KC_LALT, KC_LGUI,                            KC_SPC,                             KC_RALT, KC_RCTL, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_0,   KC_DOT,   KC_PENT),

  /* Num Lock activated 
   *  ...
   *  ... 
   *  ... | Home |  Up  | Pg Up |       |
   *  ... | Left | (no) | Right |   +   |
   *  ... | End  | Down | Pg Dn |       |
   *  ...        |  Ins |  Del  | Enter |
   */
	LAYOUT_hotswap(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          TO(0),   _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_HOME, KC_UP,   KC_PGUP,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   KC_LEFT, KC_NO,   KC_RGHT, _______,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, KC_END , KC_DOWN, KC_PGDN, 
    _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______, KC_INS,  KC_DEL, _______),

   /*
    * Fn activated: gives access to RGB control keys and Caps Lock
    * Arrow keys become Page Up, etc. just like a 60% keyboard
    */

	LAYOUT_hotswap(
    MO(3),   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, BL_TOGG, BL_DEC,  BL_INC,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_NLCK, KC_MPRV, KC_MPLY, KC_MNXT,
    _______, RGB_TOG, RGB_HUD, RGB_HUI, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
    KC_CAPS, RGB_MOD, RGB_SAD, RGB_SAI, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______,
    _______,          RGB_RMOD,RGB_VAD, RGB_VAI, _______, _______, _______, _______, _______, _______, _______, _______,          KC_PGUP, _______, _______, _______, 
    _______, _______, KC_RGUI,                            _______,                            KC_APP,  _______, _______, KC_HOME, KC_PGDN, KC_END,  _______, _______, _______),

   /* 
    * Reset layer: Fn-ESC-Backspace or FN-ESC_Del puts keyboard in flash mode
    */

	LAYOUT_hotswap(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,   _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,            _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,
    _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______, _______, _______, _______),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}
