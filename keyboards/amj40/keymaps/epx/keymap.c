#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( \
        KC_ESC,  KC_Q,    KC_W,   KC_E,     KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,    KC_BSPC, \
        KC_TAB,  KC_A,    KC_S,   KC_D,     KC_F,    KC_G,    KC_H,    KC_J,    KC_K,     KC_L,     KC_ENT,\
        KC_LSFT, KC_Z,    KC_X,   KC_C,     KC_V,    KC_B,    KC_N,    KC_M,    KC_COMMA, KC_DOT,   KC_SLSH,  \
        KC_LCTL, KC_LALT, KC_LGUI, LT(2, KC_SPC), LT(2, KC_SPC),                KC_MINS,  KC_QUOT,  KC_SCLN ),

    [1] = LAYOUT( \
        _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______, \
        KC_LCTL, KC_LALT, KC_RCTL, LT(2, KC_SPC), LT(2, KC_SPC),                KC_MINS,  KC_QUOT,  KC_SCLN ),

    [2] = LAYOUT( \
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,     KC_9,     KC_0,    KC_DEL, \
        KC_CAPS, KC_EQL,  KC_EQL,  KC_EQL,  KC_EQL,  KC_EQL,  KC_EQL,  KC_EQL,  KC_LBRC,  KC_RBRC,  KC_BSLS, \
        _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, _______, _______, _______,  KC_UP,    _______, \
        _______, _______, KC_LGUI,                MO(3),  MO(3),                KC_LEFT,  KC_DOWN,  KC_RIGHT ),

    [3] = LAYOUT( \
        MO(4),   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,    KC_F9,    KC_F10,  KC_INS, \
        _______, KC_F11,  KC_F12,  _______, _______, _______, _______, _______, _______,  TO(1),    _______, \
        _______, _______, _______, _______, _______, _______, _______, TO(0),   _______,  KC_PGUP,  _______, \
        _______, _______, KC_APP,            KC_NO,    KC_NO,                   KC_HOME,  KC_PGDN,  KC_END ),
	
    [4] = LAYOUT( \
        _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  RESET, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______, \
        _______, _______, _______,     _______,       _______,                  _______,  _______,  _______ ),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    // MACRODOWN only works in this function
   
    return MACRO_NONE;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
/*
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
  */
  return true;
}
