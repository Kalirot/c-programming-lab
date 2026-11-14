/* Day 06 Challenge 1: Robot Sensor Status Bitmask
 * Topics: bitwise operators, functions, enum/constants, conditions
 * bit 0=front obstacle, 1=left line, 2=right line,
 * bit 3=battery warning, 4=emergency stop.
 * Implement the TODOs. Valid bit positions: 0..4 only.
 */
#include <stdio.h>
#include <stdint.h>

enum SensorBit { FRONT_OBSTACLE=0, LEFT_LINE=1, RIGHT_LINE=2,
                 BATTERY_WARNING=3, EMERGENCY_STOP=4 };

uint32_t setFlag(uint32_t status, unsigned int bitPosition) {
    /* TODO: Set a valid bit; leave status unchanged for invalid positions. */
    (void)bitPosition;
    return status;
}
uint32_t clearFlag(uint32_t status, unsigned int bitPosition) {
    /* TODO: Clear a valid bit; leave status unchanged for invalid positions. */
    (void)bitPosition;
    return status;
}
int isFlagSet(uint32_t status, unsigned int bitPosition) {
    /* TODO: Return 1 if valid bit is set, otherwise 0. */
    (void)status; (void)bitPosition;
    return 0;
}
void printStatus(uint32_t status) {
    /* TODO: Print all five named sensor states as ACTIVE/INACTIVE. */
    (void)status;
}
int main(void) {
    uint32_t status = 0U;
    /* TODO: Demonstrate setting, checking, printing and clearing at least
       three flags. Also test invalid bit positions 5 and 32. */
    return 0;
}
