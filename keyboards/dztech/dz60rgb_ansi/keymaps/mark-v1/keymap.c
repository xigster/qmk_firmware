#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_60_ansi(
        KC_GESC,        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        LT(1, KC_CAPS), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,                 KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,
        KC_LCTL,        KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(1),   MO(2),   KC_RCTL
    ),
    [1] = LAYOUT_60_ansi(
        KC_GESC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, KC_INS,  _______, KC_PSCR, KC_SLCK, KC_PAUS, RESET,
        _______, KC_VOLD, KC_MUTE, KC_VOLU, KC_PGUP, KC_HOME, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,          _______,
        _______,          _______, _______, _______, KC_PGDN, KC_END,  NK_TOGG, _______, _______, _______, _______,          _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______
    ),
    [2] = LAYOUT_60_ansi(
        _______, KC_F1,    KC_F2,   KC_F3,   KC_F4,    KC_F5,    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        RGB_M_P, RGB_SPD,  RGB_VAI, RGB_SPI, RGB_HUI,  RGB_SAI,  _______, _______, _______, _______, _______, _______, _______, RESET,
        RGB_M_B, RGB_RMOD, RGB_VAD, RGB_MOD, RGB_HUD,  RGB_SAD,  _______, _______, _______, _______, _______, _______,          _______,
        RGB_M_R,           _______, RGB_TOG, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, _______, _______,          _______,
        _______, _______,  _______,                              _______,                            _______, _______, _______, _______
    )
};
