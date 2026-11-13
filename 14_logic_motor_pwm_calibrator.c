/*
 * Day 05 Challenge 2: Motor PWM Calibrator
 * Topics: Pointers + Arrays + Functions
 *
 * A technician supplies four raw PWM duty-cycle values. Calibrate each
 * value in-place using a pointer, keeping every result in the 0..100 range.
 */
#include <stdio.h>

#define MOTOR_COUNT 4

void calibrateMotors(int *dutyCycles, int count, int offset);
void printMotorValues(const int values[], int count);

int main(void)
{
    int dutyCycles[MOTOR_COUNT];
    int offset;

    printf("Motor PWM Calibrator\n");
    printf("Enter four raw PWM values (integers):\n");

    for (int i = 0; i < MOTOR_COUNT; i++) {
        printf("Motor %d: ", i + 1);
        if (scanf("%d", &dutyCycles[i]) != 1) {
            printf("Invalid input: integers only.\n");
            return 1;
        }
    }

    printf("Enter calibration offset (-20 to 20): ");
    if (scanf("%d", &offset) != 1 || offset < -20 || offset > 20) {
        printf("Invalid offset.\n");
        return 1;
    }

    calibrateMotors(dutyCycles, MOTOR_COUNT, offset);

    printf("\nCalibrated PWM values:\n");
    printMotorValues(dutyCycles, MOTOR_COUNT);
    return 0;
}

void calibrateMotors(int *dutyCycles, int count, int offset)
{
    /* TODO: Traverse the array using pointer arithmetic (for example,
       *(dutyCycles + i)). Add offset to each value, then clamp the result:
       below 0 becomes 0; above 100 becomes 100. Modify the original array. */
    (void)dutyCycles;
    (void)count;
    (void)offset;
}

void printMotorValues(const int values[], int count)
{
    /* TODO: Print each motor's calibrated value as "Motor N: X%". */
    (void)values;
    (void)count;
}
