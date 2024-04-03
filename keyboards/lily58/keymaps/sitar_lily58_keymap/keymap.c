#include QMK_KEYBOARD_H
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
enum combos {
  W_F_LBRC,
  F_P_RBRC,
  W_P_NO,
  W_R_AT,
  F_S_HASH,
  P_T_DLR,
  B_G_PERC,
  F_T_EXCLAIM,
  R_S_MINS,
  T_G_PLUS,
  S_D_UNDS,
  S_C_GRAVE,
  T_D_TILDE,
  X_C_LCBR,
  C_D_RCBR,
  L_U_LPRN,
  U_Y_RPRN,
  J_M_CIRC,
  L_N_AMPR,
  U_E_ASTR,
  Y_I_BSLS,
  N_U_QUES,
  M_N_PIPE,
  N_E_DQUO,
  E_I_QUOTE,
  H_E_COLON,
  H_COMMA_LABK,
  COMMA_DOT_RABK,
  S_T_EQUAL,

};

const uint16_t PROGMEM w_f_lbrc[] = { KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM f_p_rbrc[] = { KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM w_p_no[] = { KC_W, KC_P, COMBO_END};
const uint16_t PROGMEM w_r_at[] = { KC_W, HOME_R, COMBO_END};
const uint16_t PROGMEM f_s_hash[] = { KC_F, HOME_S, COMBO_END};
const uint16_t PROGMEM p_t_dlr[] = { KC_P, HOME_T, COMBO_END};
const uint16_t PROGMEM b_g_perc[] = { KC_B, KC_G, COMBO_END};
const uint16_t PROGMEM f_t_exclaim[] = { KC_F, HOME_T, COMBO_END};
const uint16_t PROGMEM r_s_mins[] = { HOME_R, HOME_S, COMBO_END};
const uint16_t PROGMEM t_g_plus[] = { HOME_T, KC_G, COMBO_END};
const uint16_t PROGMEM s_d_unds[] = { HOME_S, KC_D, COMBO_END};
const uint16_t PROGMEM s_c_grave[] = { HOME_S, KC_C, COMBO_END};
const uint16_t PROGMEM t_d_tilde[] = { HOME_T, KC_D, COMBO_END};
const uint16_t PROGMEM x_c_lcbr[] = { KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM c_d_rcbr[] = { KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM l_u_lprn[] = { KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM u_y_rprn[] = { KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM j_m_circ[] = { KC_J, KC_M, COMBO_END};
const uint16_t PROGMEM l_n_ampr[] = { KC_L, HOME_N, COMBO_END};
const uint16_t PROGMEM u_e_astr[] = { KC_U, HOME_E, COMBO_END};
const uint16_t PROGMEM y_i_bsls[] = { KC_Y, HOME_I, COMBO_END};
const uint16_t PROGMEM n_u_ques[] = { HOME_N, KC_U, COMBO_END};
const uint16_t PROGMEM m_n_pipe[] = { KC_M, HOME_N, COMBO_END};
const uint16_t PROGMEM n_e_dquo[] = { HOME_N, HOME_E, COMBO_END};
const uint16_t PROGMEM e_i_quote[] = { HOME_E, HOME_I, COMBO_END};
const uint16_t PROGMEM h_e_colon[] = { KC_H, HOME_E, COMBO_END};
const uint16_t PROGMEM h_comma_labk[] = { KC_H, KC_COMMA, COMBO_END};
const uint16_t PROGMEM comma_dot_rabk[] = { KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM s_t_equal[] = { HOME_S, HOME_T, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [W_F_LBRC] = COMBO(w_f_lbrc, KC_LBRC),
  [F_P_RBRC] = COMBO(f_p_rbrc, KC_RBRC),
  [W_P_NO] = COMBO(w_p_no, KC_NO),
  [W_R_AT] = COMBO(w_r_at, KC_AT),
  [F_S_HASH] = COMBO(f_s_hash, KC_HASH),
  [P_T_DLR] = COMBO(p_t_dlr, KC_DLR),
  [B_G_PERC] = COMBO(b_g_perc, KC_PERC),
  [F_T_EXCLAIM] = COMBO(f_t_exclaim, KC_EXCLAIM),
  [R_S_MINS] = COMBO(r_s_mins, KC_MINS),
  [T_G_PLUS] = COMBO(t_g_plus, KC_PLUS),
  [S_D_UNDS] = COMBO(s_d_unds, KC_UNDS),
  [S_C_GRAVE] = COMBO(s_c_grave, KC_GRAVE),
  [T_D_TILDE] = COMBO(t_d_tilde, KC_TILDE),
  [X_C_LCBR] = COMBO(x_c_lcbr, KC_LCBR),
  [C_D_RCBR] = COMBO(c_d_rcbr, KC_RCBR), 
  [L_U_LPRN] = COMBO(l_u_lprn, KC_LPRN), //(
  [U_Y_RPRN] = COMBO(u_y_rprn, KC_RPRN),
  [J_M_CIRC] = COMBO(j_m_circ, KC_CIRC),
  [L_N_AMPR] = COMBO(l_n_ampr, KC_AMPR),
  [U_E_ASTR] = COMBO(u_e_astr, KC_ASTR),
  [Y_I_BSLS] = COMBO(y_i_bsls, KC_BSLS),
  [N_U_QUES] = COMBO(n_u_ques, KC_QUES),
  [M_N_PIPE] = COMBO(m_n_pipe, KC_PIPE),
  [N_E_DQUO] = COMBO(n_e_dquo, KC_DQUO),
  [E_I_QUOTE] = COMBO(e_i_quote, KC_QUOTE),
  [H_E_COLON] = COMBO(h_e_colon, KC_COLON),
  [H_COMMA_LABK] = COMBO(h_comma_labk, KC_LABK),
  [COMMA_DOT_RABK] = COMBO(comma_dot_rabk, KC_RABK),
  [S_T_EQUAL] = COMBO(s_t_equal, KC_EQUAL),

};

enum layer_number {
  _CARMAKDH = 0,
  _LOWER,
  _RAISE,
  _ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* CARMAKDH
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   I  |   O  |   ;  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |Lshift|   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|   {   |    |   }   |------+------+------+------+------+------|
 * |Lctrl |   Z  |   X  |   C  |   D  |   V  |-------|    |-------|   K  |   H  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | Fdel |LOWER | /Space  /       \Enter \  | BSPC |RAISE | RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_CARMAKDH] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_GRV,
  KC_TAB,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_B,                     KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,  KC_MINS,
  OSM(MOD_LSFT),    KC_A,    HOME_R,  HOME_S,  HOME_T,    KC_G,          KC_M,    HOME_N,  HOME_E,  HOME_I,  KC_O,   KC_QUOT,
  KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V, KC_LCBR,  KC_RCBR,  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
                        KC_LALT, KC_DEL, OSL(_LOWER), KC_SPC,   KC_ENT, OSL(_RAISE), KC_BSPC,  KC_RGUI
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   1  |   2  |   3  |   4  |   5  |-------.    ,-------|   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  | RAISE   | BackSP  |   | PSCR |
 *                   |      |      |      |/       /         \      \ |         |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_LOWER] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  KC_F1,   KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  ,                   KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,
  XXXXXXX, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , XXXXXXX,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                             _______, _______, _______, _______, _______, _______, _______, KC_PSCR
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |  up  |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      | left | down | rght |      |      |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |   +  |   =  |   [  |   ]  |   \  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  | BackSP| RAISE|  RGUI |
 *                   |      |      |      |/       /         \      \ |       |      |       |
 *                   `----------------------------'           '------''--------------------'
 */

[_RAISE] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  KC_GRV,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, KC_UP  , XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     KC_LEFT, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  _______, _______,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______,  _______, _______,  _______, _______, _______
),

  [_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
