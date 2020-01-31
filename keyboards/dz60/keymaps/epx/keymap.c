#include QMK_KEYBOARD_H

#define _______ KC_TRNS

// Copied fromm quantum/keymap_extras/keymap_br_abnt2.h
// Copyright 2017 Potiguar Faga

#define BR_CCDL KC_SCLN      //  Ç   same scancode as ;: on US layout
#define BR_SCLN KC_SLSH      //  ;:  same scancode as /? on US layout
#define BR_QUOT KC_GRV       //  '"  same scancode as `~ on US layout
#define BR_TILD KC_QUOT      //  ~^  dead keys, same scancode as '" on US layout
#define BR_ACUT KC_LBRC      //  ´`  dead keys, same scancode as [{ on US layout
#define BR_LBRC KC_RBRC      //  [{  same scancode as ]} on US layout
#define BR_RBRC KC_BSLS      //  ]}  same scancode as \| on US layout
#define BR_BSLS KC_NUBS      //  \|  uses the non-US hash scancode (#~, sometimes §±)
#define BR_SLSH KC_INT1      //  /?  uses the INTL1 scancode

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
{
	{ KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  BR_LBRC, KC_BSPC },
	{ KC_TAB,  KC_NO,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    BR_ACUT, BR_RBRC, BR_QUOT },
	{ KC_LCTL, KC_NO,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    BR_CCDL, BR_TILD, KC_ENT,  KC_NO },
	{ KC_LSFT, BR_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  BR_SCLN, BR_SLSH, KC_UP,   KC_RSFT },
	{ KC_RCTL, KC_LALT, KC_NO,   KC_LGUI, KC_SPC,  KC_SPC, KC_SPC,   KC_SPC,  KC_SPC,  KC_SPC,  KC_RALT, MO(1),   KC_LEFT, KC_DOWN, KC_RGHT },
},
{
	{ MO(2),   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL  },
	{ _______, _______, RGB_TOG, RGB_HUD, RGB_HUI, _______, _______, _______, KC_MSTP, KC_VOLU, _______, KC_PSCR, KC_SLCK, KC_PAUS, _______ },
	{ KC_CAPS, _______, RGB_MOD, RGB_SAD, RGB_SAI, _______, _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______ },
	{ _______, _______, RGB_RMOD,RGB_VAD, RGB_VAI, _______, _______, _______, KC_VOLD, KC_MUTE, _______, _______, _______, KC_PGUP, _______ },
	{ _______, _______, _______, KC_APP,  _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_END  },
},
{
	{ _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET  },
	{ _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
	{ _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
	{ _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
	{ _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
},
};
