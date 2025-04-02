#define CHORDAL_HOLD
#define PERMISSIVE_HOLD

#define USB_SUSPEND_WAKEUP_DELAY 0
#define SERIAL_NUMBER "JzWvO/zLb3dM"
#define LAYER_STATE_32BIT
#define COMBO_COUNT 1
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

#define TAPPING_TERM_PER_KEY
#define RGB_MATRIX_STARTUP_SPD 60

// Custom Qmk

// CAPS Word - enable without assigning secial key
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD