/* Day 06 Logic 2: Robot Battery Manager
 * Topics: enums, functions, pointers, arithmetic, conditions
 * Percentage ranges: 0..10 CRITICAL, 11..25 LOW, 26..80 NORMAL,
 * 81..100 FULL; anything outside 0..100 is invalid.
 * Runtime estimate for this exercise: percentage * 1.2 minutes.
 * This is a coding exercise, not a real battery safety model.
 */
#include <stdio.h>

typedef enum { BATTERY_CRITICAL, BATTERY_LOW, BATTERY_NORMAL,
               BATTERY_FULL, BATTERY_INVALID } BatteryState;

BatteryState classifyBattery(int percentage) {
    /* TODO: Return the correct state, including invalid. */
    (void)percentage;
    return BATTERY_INVALID;
}
int estimateRuntimeMinutes(int percentage, double *runtime) {
    /* TODO: Validate percentage and pointer; write estimate through pointer.
       Return 1 on success, 0 on invalid input. */
    (void)percentage; (void)runtime;
    return 0;
}
int shouldStopRobot(int percentage) {
    /* TODO: Return 1 for CRITICAL or invalid; otherwise return 0. */
    (void)percentage;
    return 1;
}
const char *batteryStateName(BatteryState state) {
    switch (state) {
        case BATTERY_CRITICAL: return "CRITICAL";
        case BATTERY_LOW: return "LOW";
        case BATTERY_NORMAL: return "NORMAL";
        case BATTERY_FULL: return "FULL";
        default: return "INVALID";
    }
}
int main(void) {
    int values[] = {-1, 0, 10, 11, 25, 26, 80, 81, 100, 101};
    int count = (int)(sizeof(values) / sizeof(values[0]));
    /* TODO: Loop over values; print state, runtime estimate, stop decision.
       Also test estimateRuntimeMinutes with a NULL pointer. */
    (void)count;
    return 0;
}
