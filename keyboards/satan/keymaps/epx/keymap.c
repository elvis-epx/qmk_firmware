#include QMK_KEYBOARD_H

#define ________ KC_TRNS
#define XXXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_60_ansi_split_bs_rshift(
    KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_GRV,  KC_BSPC, \
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  \
    KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,   \
    KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP, \
    KC_RCTL,  KC_LALT,  KC_LGUI,                      KC_SPC,                                           MO(1),    KC_LEFT,  KC_RGHT,  KC_DOWN
  ),

  [1] = LAYOUT_60_ansi_split_bs_rshift(
    MO(2),    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,   KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_INS,  KC_DEL, \
    ________, ________, ________, ________, ________, ________, ________, ________, KC_VOLU, ________, KC_PSCR,  KC_SLCK,  KC_PAUSE, KC_NLCK, \
    KC_CAPS,  ________, ________, ________, ________, ________, ________, KC_MPRV,  KC_MPLY, KC_MNXT,  ________, ________,           ________, \
    ________,           ________, ________, ________, ________, ________, KC_MUTE,  KC_VOLD, KC_MSTP,  ________, ________, ________, KC_PGUP, \
    ________, ________, KC_APP,                        ________,                                       ________, KC_HOME,  KC_END,   KC_PGDN
  ),

  [2] = LAYOUT_60_ansi_split_bs_rshift(
    ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, RESET, \
    ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, \
    ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,           ________, \
    ________,           ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, \
    ________,  _______, ________,                     ________,                                         ________, ________, ________, ________
  ),
};
