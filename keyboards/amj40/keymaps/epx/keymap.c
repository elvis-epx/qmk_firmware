#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT( \
        KC_ESC,  KC_Q,   KC_W,   KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,   KC_BSPC, \
        KC_TAB,  KC_A,   KC_S,   KC_D,    KC_F,   KC_G,   KC_H,   KC_J,    KC_K,    KC_L,    KC_ENT,\
        KC_LSFT, KC_Z,   KC_X,   KC_C,    KC_V,   KC_B,   KC_N,   KC_M,    KC_SLSH, KC_UP,   KC_RSFT, \
        KC_LCTL, KC_LALT, KC_LGUI, LT(_LOWER, KC_SPC), LT(_RAISE, KC_SPC), KC_LEFT, KC_DOWN, KC_RIGHT \
		),

    [_LOWER] = LAYOUT( \
        KC_GRV,  KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,    KC_F8,   KC_F9,   KC_F10, KC_DEL, \
        KC_CAPS, KC_F11, KC_F12,  _______, _______, _______, KC_SCLN, KC_QUOT,  KC_LBRC, KC_RBRC, KC_BSLS, \
        _______, KC_APP, _______, _______, _______, _______, _______, KC_COMMA, KC_DOT,  KC_PGUP, _______, \
        _______, _______, _______, LT(_LOWER, KC_SPC), LT(_RAISE, KC_SPC),     KC_HOME, KC_PGDN, KC_END \
		),
	
    [_RAISE] = LAYOUT( \
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,     KC_9,     KC_0,   KC_INS, \
        KC_CAPS, KC_MINS, KC_EQL,  _______, _______, _______, _______, KC_PSCR, KC_SLCK,  KC_PAUSE, KC_MPLY, \
        _______, _______, _______, _______, _______, _______, _______, KC_COMMA,KC_DOT,   KC_VOLU,  KC_MUTE, \
        _______, _______, _______, LT(_LOWER, KC_SPC), LT(_RAISE, KC_SPC),      KC_MPRV,  KC_VOLD,  KC_MNXT \
		),

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    // MACRODOWN only works in this function
   
    return MACRO_NONE;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
 
  switch (keycode) {
    
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
      } else {
        layer_off(_LOWER);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
      } else {
        layer_off(_RAISE);
      }
      return false;
      break;
  }
  return true;
}
