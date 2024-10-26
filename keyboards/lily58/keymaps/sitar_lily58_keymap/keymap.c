// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum layers {
  _ZRO = 0,
  _UP,
  _DW
};

// Left-hand home row mods
//#define HOME_A LALT_T(KC_A)
#define HOME_R LGUI_T(KC_R)
#define HOME_S LSFT_T(KC_S)
#define HOME_T LCTL_T(KC_T)

// Right-hand home row mods
#define HOME_N RCTL_T(KC_N)
#define HOME_E RSFT_T(KC_E)
#define HOME_I RGUI_T(KC_I)
//#define HOME_O LALT_T(KC_O)

#define D_QUOT LSFT(KC_QUOT)

// Tap Dance Definitions
enum tap_dances {
  QESC,
  SCLN
};

tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Q, twice for ESC
    [QESC] = ACTION_TAP_DANCE_DOUBLE(KC_Q,  KC_ESC),
    [SCLN] = ACTION_TAP_DANCE_DOUBLE(KC_COMM, KC_SCLN),
};


// Combo definitions
const uint16_t PROGMEM tab_combo[] = {HOME_R, HOME_S, COMBO_END};
const uint16_t PROGMEM esc_combo[] = {HOME_R, HOME_S, COMBO_END};
const uint16_t PROGMEM backspace_combo[] = {HOME_E, HOME_I, COMBO_END};
const uint16_t PROGMEM c_backspace_combo[] = {HOME_E, HOME_I, COMBO_END};

const uint16_t PROGMEM exclamation_combo[] = {HOME_T, KC_F, COMBO_END};
const uint16_t PROGMEM question_combo[] = {HOME_N, KC_U, COMBO_END};
const uint16_t PROGMEM colon_combo[] = {HOME_N, KC_U, COMBO_END};
const uint16_t PROGMEM underscore_combo[] = {HOME_S, KC_D, COMBO_END};
const uint16_t PROGMEM pipe_combo[] = {KC_M, HOME_N, COMBO_END};

const uint16_t PROGMEM plus_combo[] = {HOME_T, KC_G, COMBO_END};
const uint16_t PROGMEM equals_combo[] = {KC_H, TD(SCLN), COMBO_END};
const uint16_t PROGMEM minus_combo[] = {TD(SCLN), KC_DOT,COMBO_END};

const uint16_t PROGMEM backslash_combo[] = {KC_Y, HOME_I, COMBO_END};

const uint16_t PROGMEM rbrc_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM lbrc_combo[] = {KC_C, KC_D, COMBO_END};

combo_t key_combos[] = {
    //COMBO(tab_combo, KC_TAB),
    //COMBO(backspace_combo, KC_BSPC),
    // COMBO(c_backspace_combo, LCTL(KC_BSPC)),
    // COMBO(esc_combo, KC_ESC),

    COMBO(exclamation_combo, KC_EXLM),
    // COMBO(question_combo, KC_QUES),
    //COMBO(colon_combo, KC_COLN),
    COMBO(underscore_combo, KC_UNDS),
    COMBO(pipe_combo, KC_PIPE),


    COMBO(plus_combo, KC_PLUS),
    COMBO(equals_combo, KC_EQL),
    COMBO(minus_combo, KC_MINS),

    COMBO(backslash_combo, KC_BSLS),

    COMBO(rbrc_combo, KC_RBRC),
    COMBO(lbrc_combo, KC_LBRC),
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_ZRO] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_GRV,
  KC_TAB,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_B,                     KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT,  KC_QUOT,
  KC_LSFT,  KC_A,   HOME_R,  HOME_S,  HOME_T,  KC_G,            KC_M,    HOME_N,  HOME_E,  HOME_I,  KC_O,    KC_SCLN,
  KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_D,    KC_V,  KC_LCBR,  KC_RCBR, KC_K,    KC_H,    TD(SCLN),KC_DOT,  KC_SLSH,  KC_RSFT,

            KC_LALT, KC_DEL, OSL(_DW),   KC_SPC,                   KC_ENT, OSL(_UP), KC_BSPC,  KC_RGUI
),
// ~ # ( ) %  ||  ^ & U $ `
// - * { } =  ||  X L D R X
// X @ [ ] X  ||  X : X X 
[_UP] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  _______, KC_TILD, KC_HASH, KC_LPRN, KC_RPRN, KC_PERC,                     KC_CIRC, KC_AMPR, KC_UP,   KC_DLR,  KC_GRV,  XXXXXXX,
  _______, KC_MINS, KC_ASTR, KC_LCBR, KC_RCBR, KC_EQL,                      XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
  _______, XXXXXXX, KC_AT,   KC_LBRC, KC_RBRC, XXXXXXX,  _______, _______,  XXXXXXX, KC_COLN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______,  _______, _______,  _______, _______, _______
),
[_DW] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  KC_F1,   KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  ,                   KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,
  XXXXXXX, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , XXXXXXX,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                             _______, _______, _______, _______, _______, _______, _______, KC_PSCR
)


};
