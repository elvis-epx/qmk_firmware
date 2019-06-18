#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT( \
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,   \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,   \
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,    \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,   \
        MO(1),   MO(1),   KC_LALT, KC_LGUI, KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT    \
    ),

    [1] = LAYOUT( \
       KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_DEL,   \
       _______, KC_F11,  KC_F12,  KC_MINS, KC_MINS, KC_MINS, KC_MINS, KC_MINS, KC_MINS, KC_MINS, KC_MINS, KC_MINS,  \
       KC_CAPS, KC_EQL,  KC_EQL,  KC_EQL,  KC_EQL,  KC_EQL,  KC_EQL,  KC_EQL,  KC_EQL,  KC_EQL,  KC_EQL,  KC_INS,   \
       _______, KC_LBRC, KC_LBRC, KC_LBRC, KC_LBRC, KC_LBRC, KC_RBRC, KC_RBRC, KC_RBRC, KC_RBRC, KC_RBRC, _______,  \
       MO(2),   MO(2),   _______, KC_APP,  _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END    \
    ),

    [2] = LAYOUT( \
        xxxxxxx, xxxxxxx,  xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, KC_PAUS,  \
        xxxxxxx, RGB_TOG,  RGB_HUD, RGB_HUI, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, KC_PSCR, xxxxxxx,  \
        xxxxxxx, RGB_MOD,  RGB_SAD, RGB_SAI, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,  \
        xxxxxxx, RGB_RMOD, RGB_VAD, RGB_VAI, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,  \
        xxxxxxx, xxxxxxx,  xxxxxxx, xxxxxxx, KC_MPLY, KC_MPLY, KC_MPLY, KC_MPLY, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT  \
    )
};
