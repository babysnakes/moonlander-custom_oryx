#define FLOW_TAP_TERM 100
#define CHORDAL_HOLD
#define PERMISSIVE_HOLD

#define USB_SUSPEND_WAKEUP_DELAY 0
#define SERIAL_NUMBER "JzWvO/Lv5bz0"
#define LAYER_STATE_16BIT
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

#define TAPPING_TERM_PER_KEY
#define RGB_MATRIX_STARTUP_SPD 60

// Custom Qmk

// CAPS Word - enable without assigning secial key
// #define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
// #define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

// Combos only from layer 0 (Might be later replaced with DEFAULT_REF_LAYER)
// #define COMBO_ONLY_FROM_LAYER 0
