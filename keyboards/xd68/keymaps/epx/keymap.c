#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[3][MATRIX_ROWS][MATRIX_COLS] = {
{
        {KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_GRV,  _______},
        {KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL},
        {KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, _______, KC_ENT,  KC_PGUP},
        {KC_LSFT, KC_NO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_PGDN},
        {KC_RCTL, KC_LALT, KC_LGUI, _______, _______, KC_SPC,  _______, _______, MO(1),   KC_BSPC, KC_RGUI, KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT}
}, {
        {MO(2),   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______},
        {_______, RGB_TOG, RGB_HUD, RGB_HUI, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, KC_INS},
        {KC_CAPS, RGB_MOD, RGB_SAD, RGB_SAI, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PENT, KC_HOME},
        {_______, _______, RGB_RMOD,RGB_VAD, RGB_VAI, _______, _______, _______, _______, _______, _______, _______, KC_MPLY, KC_VOLU, KC_END},
        {_______, _______, _______, _______, _______, KC_MUTE, KC_SPC,  _______, _______, KC_DEL,  _______, _______, KC_MPRV, KC_VOLD, KC_MNXT}
}, {
	{_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
	{_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET},
	{_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
	{_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
	{_______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,   _______, _______, _______, _______, _______}
}
};
