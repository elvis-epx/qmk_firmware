
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  LAYOUT_ortho_4x5(
  KC_ESC,  KC_VOLD, KC_VOLU,  KC_BSPC,
  KC_KP_7, KC_KP_8, KC_KP_9,  TO(1),
  KC_KP_4, KC_KP_5, KC_KP_6,
  KC_KP_1, KC_KP_2, KC_KP_3,  KC_PENT,
  KC_KP_0,          KC_KP_DOT
  ),
  LAYOUT_ortho_4x5(
  KC_ESC,  KC_VOLD, KC_VOLU, KC_BSPC,
  KC_HOME, KC_UP,   KC_PGUP, TO(2),
  KC_LEFT, KC_NO  , KC_RGHT,
  KC_END,  KC_DOWN, KC_PGDN, KC_PENT,
  KC_INS,           KC_DEL
  ),
  LAYOUT_ortho_4x5(
  KC_ESC,  KC_VOLD, KC_VOLU, KC_BSPC,
  KC_SPC,  KC_B,    KC_C,    TO(0),
  KC_NO  , KC_NO  , KC_NO  ,
  KC_MPRV, KC_MNXT, KC_MSTP, KC_PENT,
  KC_MUTE,          KC_MPLY
  )
};


const uint16_t PROGMEM fn_actions[] = {
};


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  keyevent_t event = record->event;
    (void)event;

  switch (id) {

  }
  return MACRO_NONE;
}


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
