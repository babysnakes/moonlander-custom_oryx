#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_165_203,
  HSV_74_112_125,
  HSV_169_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
};


typedef struct {
    uint16_t tap;
    uint16_t hold;
    uint16_t held;
} tap_dance_tap_hold_t;
tap_dance_action_t *action;

enum tap_dance_codes {
  DANCE_1,
  DANCE_0,
  DANCE_2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_GRAVE,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_ESCAPE,      MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RGUI, KC_SCLN),KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
                                                    LT(1,KC_ENTER), LT(6,KC_TAB),                                   MT(MOD_LSFT, KC_BSPC),LT(2,KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TILD,        KC_TRANSPARENT, KC_PERC,        KC_HASH,        KC_ASTR,        KC_LPRN,                                        KC_RPRN,        ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     KC_PIPE,        
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_CIRC,        KC_DLR,         KC_LBRC,                                        KC_RBRC,        KC_MINUS,       ST_MACRO_4,     ST_MACRO_5,     KC_COLN,        KC_DQUO,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AMPR,        KC_UNDS,        KC_PLUS,        KC_LCBR,                                        KC_RCBR,        KC_EQUAL,       KC_LABK,        KC_RABK,        KC_QUES,        QK_LLCK,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, MO(5)
  ),
  [2] = LAYOUT_voyager(
    KC_F11,         KC_F1,          KC_F2,          KC_F3,          TD(DANCE_0),    KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         LGUI(KC_L),     
    KC_F12,         LGUI(KC_GRAVE), KC_TRANSPARENT, KC_TRANSPARENT, KC_APPLICATION, LGUI(KC_TAB),                                   KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, KC_INSERT,      
    KC_TRANSPARENT, LALT(KC_LEFT),  LALT(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_D),                                     KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_PSCR,        
    LGUI(KC_EQUAL), TD(DANCE_1),    KC_TRANSPARENT, LCTL(KC_BSPC),  LGUI(LCTL(KC_LEFT)),LGUI(LCTL(KC_RIGHT)),                                TD(DANCE_2),    LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   LALT(KC_TAB),   ST_MACRO_6,     QK_LLCK,        
                                                    CW_TOGG,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_6,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_T,           KC_LEFT_ALT,    KC_Q,           KC_W,           KC_E,           KC_R,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_ESCAPE,      KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_B,           KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_SPACE,       KC_TAB,                                         TO(0),          LT(4,KC_ENTER)
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_DELETE,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPC,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MINUS,       KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_DOT,         KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_0,           KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,                                KC_BRIGHTNESS_UP,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_MS_BTN1,     KC_TRANSPARENT,                                 KC_MS_BTN3,     KC_MS_BTN2
  ),
  [7] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        KC_TRANSPARENT, KC_PAUSE,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    RGB_HUI,        KC_TRANSPARENT, RGB_VAD,        RGB_VAI,        KC_TRANSPARENT, KC_SCRL,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RGB_HUD,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(3),          TO(6),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_165_203,  HSV_74_112_125, HSV_169_255_255,                                KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_DOWN,QK_DYNAMIC_TAPPING_TERM_UP,QK_DYNAMIC_TAPPING_TERM_PRINT,KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, TO(0),                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { KC_LEFT_SHIFT, KC_ESCAPE, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_EQUAL, KC_GRAVE, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_C, KC_V, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TT(7)),
    COMBO(combo1, TG(6)),
    COMBO(combo2, TT(5)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LGUI, KC_A):
            return g_tapping_term + 20;
        case MT(MOD_LALT, KC_S):
            return g_tapping_term + 20;
        case MT(MOD_LCTL, KC_D):
            return g_tapping_term + 15;
        case MT(MOD_LSFT, KC_F):
            return g_tapping_term + 15;
        case MT(MOD_RSFT, KC_J):
            return g_tapping_term + 15;
        case MT(MOD_RCTL, KC_K):
            return g_tapping_term + 15;
        case MT(MOD_RALT, KC_L):
            return g_tapping_term + 20;
        case MT(MOD_RGUI, KC_SCLN):
            return g_tapping_term + 20;
        case LT(2,KC_SPACE):
            return g_tapping_term + 15;
        default:
            return g_tapping_term;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {0,0,0}, {152,255,255}, {41,255,255}, {41,255,255}, {101,232,159}, {0,0,0}, {152,255,255}, {152,255,255}, {41,255,255}, {41,255,255}, {101,232,159}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {101,232,159}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {101,232,159}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {101,232,159}, {152,255,255}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {101,232,159}, {152,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,218,204}, {0,0,0}, {131,255,255} },

    [2] = { {37,249,237}, {37,249,237}, {37,249,237}, {37,249,237}, {31,223,255}, {37,249,237}, {37,249,237}, {215,218,204}, {0,0,0}, {0,0,0}, {178,201,206}, {22,253,152}, {0,0,0}, {31,223,255}, {31,223,255}, {0,0,0}, {0,0,0}, {22,253,152}, {215,218,204}, {0,133,195}, {0,0,0}, {22,253,152}, {22,253,152}, {22,253,152}, {178,201,206}, {0,0,0}, {37,249,237}, {37,249,237}, {37,249,237}, {37,249,237}, {37,249,237}, {0,0,0}, {74,237,134}, {0,0,0}, {74,237,134}, {0,0,0}, {0,0,0}, {0,0,0}, {74,237,134}, {74,237,134}, {74,237,134}, {74,237,134}, {0,0,0}, {0,0,0}, {22,253,152}, {22,253,152}, {22,253,152}, {22,253,152}, {22,253,152}, {0,218,204}, {0,0,0}, {0,0,0} },

    [3] = { {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {10,237,255}, {168,220,255}, {10,237,255}, {98,246,255}, {10,237,255}, {10,237,255}, {168,220,255}, {168,220,255}, {98,246,255}, {98,246,255}, {98,246,255}, {10,237,255}, {10,237,255}, {139,152,157}, {10,237,255}, {10,237,255}, {10,237,255}, {10,237,255}, {0,104,107}, {0,104,107}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {139,152,157}, {0,245,245}, {0,104,107} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {98,246,255}, {0,0,0}, {98,246,255}, {0,0,0}, {0,0,0}, {0,0,0}, {98,246,255}, {98,246,255}, {98,246,255}, {98,246,255}, {98,246,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {98,246,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,223,255}, {0,0,0}, {0,0,0}, {0,0,0}, {199,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {199,218,204}, {199,218,204}, {199,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {109,218,204}, {109,218,204}, {109,218,204}, {0,0,0}, {119,218,204}, {0,245,245}, {31,223,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {119,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {119,218,204}, {119,218,204}, {119,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {139,219,228}, {139,219,228}, {139,219,228}, {0,0,0}, {0,0,0}, {119,218,204}, {119,218,204} },

    [7] = { {38,218,204}, {38,218,204}, {38,218,204}, {38,218,204}, {0,0,0}, {31,223,255}, {38,218,204}, {0,0,0}, {38,218,204}, {38,218,204}, {0,0,0}, {31,223,255}, {38,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {38,218,204}, {38,218,204}, {38,218,204}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,86,242}, {0,86,242}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {16,218,204}, {16,218,204}, {16,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_MINUS));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_BSLS)) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_SPACE)) SS_DELAY(100) SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;

    case TD(DANCE_1):
        action = &tap_dance_actions[TD_INDEX(keycode)];
        if (!record->event.pressed && action->state.count && !action->state.finished) {
            tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
            tap_code16(tap_hold->tap);
        }
        break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_165_203:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,165,203);
      }
      return false;
    case HSV_74_112_125:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(74,112,125);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
      }
      return false;
  }
  return true;
}

void tap_dance_tap_hold_finished(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (state->pressed) {
        if (state->count == 1
#ifndef PERMISSIVE_HOLD
            && !state->interrupted
#endif
        ) {
            register_code16(tap_hold->hold);
            tap_hold->held = tap_hold->hold;
        } else {
            register_code16(tap_hold->tap);
            tap_hold->held = tap_hold->tap;
        }
    }
}

void tap_dance_tap_hold_reset(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (tap_hold->held) {
        unregister_code16(tap_hold->held);
        tap_hold->held = 0;
    }
}

#define ACTION_TAP_DANCE_TAP_HOLD(tap, hold) \
    { .fn = {NULL, tap_dance_tap_hold_finished, tap_dance_tap_hold_reset}, .user_data = (void *)&((tap_dance_tap_hold_t){tap, hold, 0}), }

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[2];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F4);
        tap_code16(KC_F4);
        tap_code16(KC_F4);
    }
    if(state->count > 3) {
        tap_code16(KC_F4);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_F4); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F4)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F4); register_code16(KC_F4);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_F4); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F4)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F4); break;
    }
    dance_state[0].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_6)));
        tap_code16(LALT(LSFT(KC_6)));
        tap_code16(LALT(LSFT(KC_6)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_6)));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_6))); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_7))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_6))); register_code16(LALT(LSFT(KC_6)));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_6))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_7))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_6))); break;
    }
    dance_state[1].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_1] = ACTION_TAP_DANCE_TAP_HOLD(KC_DELETE, LSFT(KC_DELETE)),
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
};
