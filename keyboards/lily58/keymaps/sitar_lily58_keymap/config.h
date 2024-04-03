#pragma once

#define COMBO_COUNT 29 // Change this number.

#define COMBO_VARIABLE_LEN
// Time (in ms) for combo processing
#define COMBO_TERM 40

#define TAPPING_TERM 200
// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

// Time (in ms) before one shot keys are released
#define ONESHOT_TIMEOUT 5000

// Prevent accidental repeats of the tap-hold keys when typing quickly.
#define TAPPING_FORCE_HOLD

// Prevent short hold periods being interpreted as individual taps when typing quickly.
#define PERMISSIVE_HOLD

// Don't allow macro calls in macros
#define DYNAMIC_MACRO_NO_NESTING

// Allows media codes to properly register in macros and rotary encoder code
#define TAP_CODE_DELAY 10

// Determine left / right by which file is flashed.
/* #define EE_HANDS */

// Key Mouse settings

// Set the mouse settings to a comfortable speed/accuracy trade-off
// Assume the screen refresh rate is 60 Htz or higher
// The default is 50. This makes the mouse ~3 times faster and more accurate
// #undef to override default settings
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 21

// The default is 20. Since we made the mouse about 3 times faster with the previous setting,
// give it more time to accelerate to max speed to retain precise control over short distances.
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 37

// The default is 300. Make this as low as possible while keeping the cursor responsive
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 120
