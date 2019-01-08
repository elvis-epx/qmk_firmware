#include <string.h>
#include "4x5.h"

#define BG_BLUE 1
#define BG_RED  4
#define BG_GREEN 2
#define BG_YELLOW (BG_RED | BG_GREEN)

void rgbann(void);
uint8_t bg_color = BG_BLUE;
int bg_cycle = 0;
bool bg_virgin = true;

void matrix_init_kb(void) {
	// put your keyboard start-up code here
	// runs once when the firmware starts up

	matrix_init_user();
	// output LED
	DDRB |= 0b00011100;
	rgbann();
}

void matrix_scan_kb(void) {
	// put your looping keyboard code here
	// runs every cycle (a lot)

	matrix_scan_user();

	bg_cycle = (bg_cycle + 1) % 12;
	if (bg_cycle == 0) {
		PORTB &= 0b11100011;
		PORTB |= (bg_color << 2);
	} else if (bg_cycle == 1) {
		PORTB &= 0b11100011;
	}
}

void led_set_kb(uint8_t usb_led) {
}

#define MORSE_IDLE 0
#define MORSE_TYPING 1

#define NUMBER_LAYER 0
#define ARROW_LAYER 1
#define MORSE_LAYER 2

int morse_status = MORSE_IDLE;
int morse_bits_len = 0;
char morse_bits[17];
uint16_t morse_timer;
uint32_t cur_layer = NUMBER_LAYER;

typedef struct code_tuple {
	uint16_t character;
	char *encoding;
} code_tuple;

const code_tuple morse_code[] = {
	{ KC_A, ".-" },
	{ KC_B, "-..." },
	{ KC_C, "-.-." },
	{ KC_D, "-.." },
	{ KC_E, "." },
	{ KC_F, "..-." },
	{ KC_G, "--." },
	{ KC_H, "...." },
	{ KC_I, ".." },
	{ KC_J, ".---" },
	{ KC_K, "-.-" },
	{ KC_L, ".-.." },
	{ KC_M, "--" },
	{ KC_N, "-." },
	{ KC_O, "---" },
	{ KC_P, ".--." },
	{ KC_Q, "--.-" },
	{ KC_R, ".-." },
	{ KC_S, "..." },
	{ KC_T, "-" },
	{ KC_U, "..-" },
	{ KC_V, "...-" },
	{ KC_W, ".--" },
	{ KC_X, "-..-" },
	{ KC_Y, "-.--" },
	{ KC_Z, "--.." },
	{ KC_1, ".----" },
	{ KC_2, "..---" },
	{ KC_3, "...--" },
	{ KC_4, "....-" },
	{ KC_5, "....." },
	{ KC_6, "-...." },
	{ KC_7, "--..." },
	{ KC_8, "---.." },
	{ KC_9, "----." },
	{ KC_0, "-----" },
	{ KC_COMM, "--..--" },
	{ KC_DOT, ".-.-.-" },
	{ KC_SLSH, "-..-." },
	{ KC_QUOT, ".----." },
	{ KC_LBRC, "-.--.-" },
	{ KC_RBRC, "-.--." },
	{ KC_MINS, "-....-" },
	{ KC_EQL, "-...-" },
	{ KC_NO, 0 }
};

uint16_t morse_search(const char *encoded)
{
	for (int i = 0; morse_code[i].character != KC_NO && morse_code[i].encoding != 0; ++i) {
		if (strcmp(encoded, morse_code[i].encoding) == 0) {
			return morse_code[i].character;
		}
	}

	return KC_NO;
}

void morse_type(char bit)
{
	if (morse_status == MORSE_TYPING) {
		if (timer_elapsed(morse_timer) > 3000) {
			morse_bits_len = 0;
		}
	} else {
		morse_bits_len = 0;
	}

	morse_status = MORSE_TYPING;
	morse_timer = timer_read();
	if (morse_bits_len < 16) {
		morse_bits_len += 1;
		morse_bits[morse_bits_len - 1] = bit;
	}
	rgbann();
<<<<<<< HEAD
}

bool morse_resolve(uint16_t *res)
{
	bool was_typing = false;

	if (morse_status == MORSE_TYPING) {
		if (cur_layer == MORSE_LAYER && timer_elapsed(morse_timer) < 3000) {
			was_typing = true;
			morse_bits[morse_bits_len] = 0;
			*res = morse_search(morse_bits);
		}

		morse_status = MORSE_IDLE;
	}

	return was_typing;
}

bool morse_dot(keyrecord_t *record)
{
	morse_type('.');
	return false;
}

bool morse_resolve(uint16_t *res)
{
	bool was_typing = false;

	if (morse_status == MORSE_TYPING) {
		if (cur_layer == MORSE_LAYER && timer_elapsed(morse_timer) < 3000) {
			was_typing = true;
			morse_bits[morse_bits_len] = 0;
			*res = morse_search(morse_bits);
		}

		morse_status = MORSE_IDLE;
		rgbann();
	}

	return was_typing;
}

bool morse_dot(keyrecord_t *record)
{
	morse_type('.');
	return false;
}

bool morse_dash(keyrecord_t *record)
{
	morse_type('-');
	return false;
}

bool morse_backspace(uint16_t keycode, keyrecord_t *record)
{
	uint16_t dummy;
	if (morse_resolve(&dummy)) {
		return false;
	}

	return process_record_user(keycode, record);
}

bool morse_space(keyrecord_t *record)
{
	uint16_t c;
	if (! morse_resolve(&c)) {
		return process_record_user(KC_SPC, record);
	}
	if (c) {
		register_code(c);
		unregister_code(c);
	}
	return false;
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record)
{
	if (record->event.pressed) {
		if (keycode == KC_B) {
			return morse_dot(record);
		} else if (keycode == KC_C) {
			return morse_dash(record);
		} else if (keycode == KC_SPC) {
			return morse_space(record);
		} else {
			return morse_backspace(keycode, record);
		}
	}

	return process_record_user(keycode, record);
}

void rgbann(void)
{
	if (cur_layer == NUMBER_LAYER) {
		bg_color = bg_virgin ? BG_BLUE : 0;
	} else if (cur_layer == ARROW_LAYER) {
		bg_virgin = false;
		bg_color = BG_RED;
	} else if (cur_layer == MORSE_LAYER) {
		bg_virgin = false;
		if (morse_status == MORSE_TYPING) {
			bg_color = BG_YELLOW;
		} else {
			bg_color = BG_GREEN;
		}
	}
}

uint32_t layer_state_set_user(uint32_t state)
{
	cur_layer = state;
	rgbann();
	return state;
}
