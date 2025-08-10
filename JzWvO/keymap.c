#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ORYX_SL_TRIGG,
  HSV_0_165_203,
  HSV_74_255_206,
  HSV_152_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  MAC_MISSION_CONTROL,
  MAC_LOCK,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
};

#define DUAL_FUNC_0 LT(15, KC_5)
#define DUAL_FUNC_1 LT(14, KC_F21)
#define DUAL_FUNC_2 LT(14, KC_0)
#define DUAL_FUNC_3 LT(6, KC_F21)
#define DUAL_FUNC_4 LT(1, KC_K)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TG(12),                                         KC_AUDIO_VOL_UP,KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_GRAVE,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_AUDIO_VOL_DOWN,KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_ESCAPE,      KC_A,           MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),KC_G,           TT(11),                                                                         KC_MEDIA_PLAY_PAUSE,KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_RALT, KC_L),KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    ORYX_SL_TRIGG,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(12),         TT(2),                                                                                                          LALT(LGUI(KC_SPACE)),KC_LEFT_GUI,    KC_TRANSPARENT, DM_PLY1,        DM_PLY2,        MO(13),         
    LT(3, KC_ENTER),LT(7, KC_TAB),  KC_LEFT_CTRL,                   KC_LEFT_ALT,    MT(MOD_LSFT, KC_BSPC),LT(4, KC_SPACE)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_Z),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LGUI, KC_SLASH),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 LGUI(KC_SPACE), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LT(8, KC_TAB),  KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, LT(5, KC_SPACE)
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_S,           KC_D,           KC_F,           KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_J,           KC_K,           KC_L,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TILD,        ST_MACRO_0,     ST_MACRO_1,     KC_LCBR,        KC_LBRC,        KC_LPRN,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_RPRN,        KC_RBRC,        KC_RCBR,        ST_MACRO_4,     ST_MACRO_5,     KC_PIPE,        
    ST_MACRO_2,     KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_DQUO,        
    ST_MACRO_3,     KC_LEFT_GUI,    KC_LEFT_ALT,    DUAL_FUNC_0,    MT(MOD_LSFT, KC_MINUS),KC_PLUS,                                        KC_EQUAL,       KC_RIGHT_SHIFT, DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    ST_MACRO_6,     
    QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          TD(DANCE_0),    KC_F5,          KC_F11,                                         KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         LGUI(KC_L),     
    LCTL(KC_F11),   LGUI(KC_GRAVE), KC_TRANSPARENT, KC_TRANSPARENT, KC_APPLICATION, LGUI(KC_TAB),   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, KC_INSERT,      
    LCTL(KC_F12),   LALT(KC_LEFT),  LALT(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_D),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       LALT(LCTL(LSFT(KC_GRAVE))),KC_PSCR,        
    KC_TRANSPARENT, DUAL_FUNC_4,    KC_TRANSPARENT, LCTL(KC_BSPC),  LGUI(LCTL(KC_LEFT)),LGUI(LCTL(KC_RIGHT)),                                TD(DANCE_1),    LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   ST_MACRO_7,     ST_MACRO_8,     KC_TRANSPARENT, 
    QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                                                          KC_TRANSPARENT, ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,    KC_TRANSPARENT, KC_TRANSPARENT, 
    CW_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F11,                                         KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         MAC_LOCK,       
    KC_TRANSPARENT, LGUI(LSFT(KC_V)),KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,     MAC_MISSION_CONTROL,KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, KC_INSERT,      
    KC_TRANSPARENT, LGUI(KC_LBRC),  LGUI(KC_RBRC),  KC_TRANSPARENT, KC_TRANSPARENT, KC_F11,         KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       LALT(LGUI(LCTL(KC_M))),LGUI(LSFT(KC_3)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_BSPC),  LCTL(KC_LEFT),  LCTL(KC_RIGHT),                                 TD(DANCE_2),    LGUI(LSFT(KC_LBRC)),LGUI(LSFT(KC_RBRC)),LALT(KC_TAB),   LALT(LGUI(LSFT(KC_SPACE))),LGUI(LSFT(KC_4)),
    QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                                                          KC_TRANSPARENT, LSFT(KC_7),     LALT(LSFT(KC_2)),LALT(KC_3),     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_6,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DELETE,      
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F1,          
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_TRANSPARENT, KC_END,                                                                         LSFT(KC_TAB),   KC_TRANSPARENT, KC_J,           KC_K,           KC_L,           KC_TRANSPARENT, KC_F3,          
    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_R),     
    TO(0),          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_LEFT_ALT,    KC_F5,                                                                                                          KC_F9,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,        KC_PAGE_UP,     
    KC_SPACE,       KC_TAB,         KC_ESCAPE,                      KC_LEFT_GUI,    KC_BSPC,        KC_ENTER
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, LALT(LGUI(LCTL(KC_1))),LALT(LGUI(LCTL(KC_2))),LALT(LGUI(LCTL(KC_3))),LALT(LGUI(LCTL(KC_4))),KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(KC_0))),KC_TRANSPARENT, 
    LGUI(LSFT(KC_GRAVE)),KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_UP),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(KC_UP))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_LEFT),  LGUI(KC_DOWN),  LGUI(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(KC_LEFT))),LALT(LGUI(LCTL(KC_DOWN))),LALT(LGUI(LCTL(KC_RIGHT))),LGUI(KC_PAGE_UP),KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_12,    ST_MACRO_13,    ST_MACRO_14,    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_15,    ST_MACRO_16,    KC_TRANSPARENT, LGUI(KC_PGDN),  KC_TRANSPARENT, 
    QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_E)),LALT(LCTL(KC_ENTER)),LALT(LCTL(KC_T)),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_H),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_D)),LALT(LCTL(KC_F)),LALT(LCTL(KC_G)),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_M),     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LCTL(KC_LEFT)),LALT(LCTL(KC_BSPC)),LALT(LCTL(KC_RIGHT)),KC_TRANSPARENT, KC_TRANSPARENT, 
    QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_moonlander(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_HOME,                                        KC_END,         KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_GRAVE,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_ESCAPE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_PGDN,        KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_RIGHT,       KC_LEFT_GUI,                                                                                                    KC_TRANSPARENT, KC_DOWN,        KC_UP,          KC_LBRC,        KC_RBRC,        KC_TRANSPARENT, 
    KC_ENTER,       KC_TAB,         KC_LEFT_CTRL,                   KC_LEFT_ALT,    KC_BSPC,        KC_SPACE
  ),
  [10] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NUM,         KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                                                          KC_TRANSPARENT, KC_KP_0,        KC_KP_0,        KC_KP_DOT,      KC_KP_ENTER,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [11] = LAYOUT_moonlander(
    AU_TOGG,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_BRIGHTNESS_DOWN,                                KC_BRIGHTNESS_UP,KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    MU_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_WH_LEFT,  KC_MS_UP,       KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_F12,         
    MU_NEXT,        KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_BACK,                                                                                                    KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MS_BTN1,     KC_MS_BTN3,     KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2
  ),
  [12] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEH,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [13] = LAYOUT_moonlander(
    KC_PAUSE,       KC_TRANSPARENT, RGB_VAD,        RGB_VAI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_SCRL,        KC_TRANSPARENT, RGB_TOG,        TOGGLE_LAYER_COLOR,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_DOWN,QK_DYNAMIC_TAPPING_TERM_UP,QK_DYNAMIC_TAPPING_TERM_PRINT,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_CAPS,        KC_TRANSPARENT, RGB_HUD,        RGB_HUI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          TO(1),          TO(6),          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_MODE_FORWARD,RGB_SLD,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, TO(9),          TO(10),         KC_TRANSPARENT, KC_TRANSPARENT, 
    QK_LLCK,        KC_TRANSPARENT, HSV_0_165_203,  HSV_74_255_206, HSV_152_255_255,KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, DM_RSTP,        DM_REC1,        DM_REC2,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
                 'L', 'L', 'L', 'R', 'R', 'R'
);


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_A:
            return g_tapping_term + 70;
        case MT(MOD_LALT, KC_S):
            return g_tapping_term + 20;
        case MT(MOD_LCTL, KC_D):
            return g_tapping_term + 15;
        case MT(MOD_LSFT, KC_F):
            return g_tapping_term + 15;
        case LT(3, KC_ENTER):
            return g_tapping_term -25;
        case LT(7, KC_TAB):
            return g_tapping_term -15;
        case MT(MOD_RSFT, KC_J):
            return g_tapping_term + 15;
        case MT(MOD_RCTL, KC_K):
            return g_tapping_term + 15;
        case MT(MOD_RALT, KC_L):
            return g_tapping_term + 20;
        case KC_SCLN:
            return g_tapping_term + 35;
        case LALT(LGUI(KC_SPACE)):
            return g_tapping_term + 20;
        case LT(4, KC_SPACE):
            return g_tapping_term + 15;
        case DUAL_FUNC_0:
            return g_tapping_term + 25;
        case MT(MOD_LSFT, KC_MINUS):
            return g_tapping_term + 40;
        default:
            return g_tapping_term;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226}, {44,24,226} },

    [1] = { {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231}, {0,82,231} },

    [2] = { {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {0,245,245}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234}, {144,223,234} },

    [3] = { {0,0,0}, {159,238,135}, {0,0,0}, {205,118,209}, {0,245,245}, {0,0,0}, {205,118,209}, {32,195,255}, {149,195,255}, {0,0,0}, {0,0,0}, {205,118,209}, {32,195,255}, {149,195,255}, {0,0,0}, {0,0,0}, {94,147,247}, {32,195,255}, {149,195,255}, {0,0,0}, {0,0,0}, {94,147,247}, {32,195,255}, {149,195,255}, {0,0,0}, {0,0,0}, {94,147,247}, {32,195,255}, {15,229,224}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {159,238,135}, {159,238,135}, {205,118,209}, {0,0,0}, {0,0,0}, {205,118,209}, {32,195,255}, {149,195,255}, {0,0,0}, {0,0,0}, {205,118,209}, {32,195,255}, {149,195,255}, {0,0,0}, {0,0,0}, {94,147,247}, {32,195,255}, {149,195,255}, {0,0,0}, {0,0,0}, {94,147,247}, {32,195,255}, {149,195,255}, {0,0,0}, {0,0,0}, {94,147,247}, {32,195,255}, {15,229,224}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {215,218,204}, {215,218,204}, {0,0,0}, {0,245,245}, {31,139,255}, {215,218,204}, {31,223,255}, {152,255,255}, {0,0,0}, {31,139,255}, {0,0,0}, {31,223,255}, {0,0,0}, {0,0,0}, {31,139,255}, {0,0,0}, {0,0,0}, {77,222,255}, {0,0,0}, {31,223,255}, {215,218,204}, {0,0,0}, {31,223,255}, {0,0,0}, {31,139,255}, {31,139,255}, {31,223,255}, {31,223,255}, {31,223,255}, {0,0,0}, {0,0,0}, {149,195,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,139,255}, {0,0,0}, {22,253,152}, {22,253,152}, {0,0,0}, {31,139,255}, {159,238,135}, {74,237,134}, {22,253,152}, {215,218,204}, {31,139,255}, {74,237,134}, {74,237,134}, {22,253,152}, {215,218,204}, {31,139,255}, {159,238,135}, {74,237,134}, {22,253,152}, {215,218,204}, {31,139,255}, {159,238,135}, {159,238,135}, {152,255,255}, {31,223,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {31,139,255}, {215,218,204}, {31,223,255}, {0,0,0}, {0,0,0}, {31,139,255}, {0,0,0}, {31,223,255}, {0,0,0}, {0,0,0}, {31,139,255}, {0,0,0}, {0,0,0}, {77,222,255}, {0,0,0}, {31,139,255}, {215,218,204}, {0,0,0}, {31,223,255}, {0,0,0}, {31,139,255}, {31,139,255}, {31,223,255}, {31,223,255}, {31,223,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {77,222,255}, {77,222,255}, {0,0,0}, {31,139,255}, {0,0,0}, {22,253,152}, {0,0,0}, {0,0,0}, {31,139,255}, {159,238,135}, {74,237,134}, {22,253,152}, {215,218,204}, {31,139,255}, {74,237,134}, {74,237,134}, {22,253,152}, {215,218,204}, {31,139,255}, {0,0,0}, {74,237,134}, {22,253,152}, {215,218,204}, {31,139,255}, {159,238,135}, {159,238,135}, {152,255,255}, {31,223,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {41,92,255}, {41,92,255}, {144,223,234}, {144,223,234}, {0,245,245}, {41,92,255}, {41,92,255}, {31,223,255}, {41,92,255}, {41,92,255}, {41,92,255}, {31,223,255}, {31,223,255}, {41,92,255}, {41,92,255}, {41,92,255}, {41,92,255}, {31,223,255}, {41,92,255}, {41,92,255}, {41,92,255}, {41,92,255}, {41,92,255}, {41,92,255}, {144,223,234}, {41,92,255}, {41,92,255}, {41,92,255}, {41,92,255}, {41,92,255}, {74,237,134}, {74,237,134}, {41,92,255}, {132,92,255}, {159,238,135}, {41,218,204}, {0,245,245}, {31,223,255}, {31,223,255}, {215,218,204}, {74,237,134}, {41,92,255}, {41,92,255}, {41,92,255}, {41,92,255}, {74,237,134}, {41,92,255}, {41,92,255}, {41,92,255}, {41,92,255}, {144,223,234}, {41,92,255}, {41,92,255}, {41,92,255}, {144,223,234}, {144,223,234}, {41,92,255}, {41,92,255}, {41,92,255}, {41,92,255}, {144,223,234}, {41,92,255}, {41,92,255}, {41,92,255}, {41,92,255}, {31,223,255}, {31,223,255}, {215,218,204}, {41,92,255}, {41,92,255}, {144,223,234}, {41,218,204} },

    [7] = { {0,0,0}, {215,218,204}, {0,0,0}, {0,0,0}, {0,245,245}, {0,106,208}, {0,0,0}, {0,0,0}, {144,223,234}, {0,0,0}, {0,106,208}, {0,0,0}, {144,223,234}, {144,223,234}, {0,0,0}, {0,106,208}, {144,223,234}, {144,223,234}, {144,223,234}, {0,0,0}, {0,106,208}, {0,0,0}, {144,223,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,106,208}, {0,0,0}, {74,237,134}, {74,237,134}, {0,0,0}, {0,0,0}, {0,0,0}, {31,223,255}, {0,0,0}, {0,0,0}, {0,0,0}, {31,223,255}, {31,223,255}, {74,237,134}, {0,0,0}, {0,0,0}, {0,0,0}, {31,223,255}, {74,237,134}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {144,223,234}, {144,223,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,223,255}, {0,245,245}, {0,82,231}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {144,223,234}, {0,0,0}, {0,0,0}, {31,223,255}, {0,245,245}, {0,82,231}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {0,245,245}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255}, {20,170,255} },

    [10] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {37,249,237}, {37,249,237}, {37,249,237}, {37,249,237}, {37,249,237}, {37,249,237}, {139,255,255}, {139,255,255}, {139,255,255}, {37,249,237}, {37,249,237}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {245,220,170}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [11] = { {74,237,134}, {74,237,134}, {74,237,134}, {0,0,0}, {0,0,0}, {20,170,255}, {0,0,0}, {50,131,213}, {0,0,0}, {0,0,0}, {20,170,255}, {0,0,0}, {50,131,213}, {25,54,246}, {0,0,0}, {20,170,255}, {0,0,0}, {50,131,213}, {25,118,235}, {0,0,0}, {20,170,255}, {0,0,0}, {50,131,213}, {25,182,237}, {0,0,0}, {20,170,255}, {0,0,0}, {0,0,0}, {0,0,0}, {37,249,237}, {0,0,0}, {0,245,245}, {159,238,135}, {159,238,135}, {0,0,0}, {0,106,208}, {20,170,255}, {20,170,255}, {0,0,0}, {0,0,0}, {0,0,0}, {20,170,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {20,170,255}, {119,218,204}, {199,218,204}, {10,237,255}, {37,249,237}, {20,170,255}, {199,218,204}, {199,218,204}, {10,237,255}, {37,249,237}, {20,170,255}, {119,218,204}, {199,218,204}, {10,237,255}, {37,249,237}, {20,170,255}, {119,218,204}, {119,218,204}, {0,0,0}, {37,249,237}, {0,0,0}, {0,0,0}, {159,238,135}, {0,0,0}, {0,0,0}, {0,0,0} },

    [12] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {144,223,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {144,223,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {144,223,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {144,223,234}, {144,223,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,139,255}, {31,139,255}, {31,139,255}, {0,0,0}, {0,0,0}, {31,139,255}, {31,139,255}, {31,139,255}, {0,0,0}, {0,0,0}, {31,139,255}, {31,139,255}, {31,139,255}, {0,0,0}, {0,0,0}, {31,139,255}, {31,139,255}, {31,139,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [13] = { {31,223,255}, {31,223,255}, {25,218,204}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,139,255}, {31,139,255}, {31,139,255}, {31,139,255}, {0,165,203}, {31,139,255}, {31,139,255}, {31,139,255}, {31,139,255}, {74,255,206}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,139,255}, {0,0,0}, {72,143,78}, {144,223,234}, {144,223,234}, {31,139,255}, {0,0,0}, {72,143,78}, {144,223,234}, {144,223,234}, {31,223,255}, {0,0,0}, {72,143,78}, {144,223,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
    if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
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
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
    case 10:
      set_layer_color(10);
      break;
    case 11:
      set_layer_color(11);
      break;
    case 12:
      set_layer_color(12);
      break;
    case 13:
      set_layer_color(13);
      break;
   default:
      if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
        rgb_matrix_set_color_all(0, 0, 0);
      }
  }

  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_MINUS));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_1))SS_DELAY(100)  SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL)SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS)SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_DOT))SS_DELAY(100)  SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_BSLS))SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_TAB) ));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LGUI(SS_TAP(X_SPACE)))SS_DELAY(150)  SS_LSFT(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_6) SS_TAP(X_KP_4) ));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_8) ));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_6) SS_TAP(X_KP_3) ));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_SPACE))SS_DELAY(250)  SS_TAP(X_S)SS_DELAY(250)  SS_TAP(X_ESCAPE));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_SPACE))SS_DELAY(250)  SS_TAP(X_R));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_SPACE))SS_DELAY(250)  SS_TAP(X_N));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_LEFT))SS_DELAY(100)  SS_LGUI(SS_TAP(X_PAGE_UP))SS_DELAY(100)  SS_LGUI(SS_TAP(X_RIGHT)));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_RIGHT))SS_DELAY(100)  SS_LGUI(SS_TAP(X_PAGE_UP))SS_DELAY(100)  SS_LGUI(SS_TAP(X_LEFT)));
    }
    break;
    case ORYX_SL_TRIGG:
      if (record->event.pressed) {
        wait_ms(10);
        trigger_smart_layer();
      }
      break;
    case MAC_MISSION_CONTROL:
      HCS(0x29F);
    case MAC_LOCK:
      HCS(0x19E);

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_UNDS);
        } else {
          unregister_code16(KC_UNDS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LABK);
        } else {
          unregister_code16(KC_LABK);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_RABK);
        } else {
          unregister_code16(KC_RABK);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_QUES);
        } else {
          unregister_code16(KC_QUES);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DELETE);
        } else {
          unregister_code16(KC_DELETE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_DELETE));
        } else {
          unregister_code16(LSFT(KC_DELETE));
        }  
      }  
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_0_165_203:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,165,203);
        }
        return false;
    case HSV_74_255_206:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(74,255,206);
        }
        return false;
    case HSV_152_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(152,255,255);
        }
        return false;
  }
  return true;
}


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

static tap dance_state[3];

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
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_6)));
        tap_code16(LALT(LSFT(KC_6)));
        tap_code16(LALT(LSFT(KC_6)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_6)));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_6))); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_7))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_6))); register_code16(LALT(LSFT(KC_6)));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_6))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_7))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_6))); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(LSFT(KC_6)));
        tap_code16(LCTL(LSFT(KC_6)));
        tap_code16(LCTL(LSFT(KC_6)));
    }
    if(state->count > 3) {
        tap_code16(LCTL(LSFT(KC_6)));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LCTL(LSFT(KC_6))); break;
        case DOUBLE_TAP: register_code16(LCTL(LSFT(KC_7))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LSFT(KC_6))); register_code16(LCTL(LSFT(KC_6)));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_6))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LSFT(KC_7))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_6))); break;
    }
    dance_state[2].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
};
