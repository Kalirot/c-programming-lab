/*
 * Day 04 Challenge 2: Robot Adaptive Speed Controller
 * File: 11_logic_robot_adaptive_speed.c
 *
 * Topics: Structures + Functions + if/else + Arithmetic Operations
 *
 * A robot must reduce its speed as an obstacle gets closer. Complete the
 * TODOs in calculateSpeed(). Do not hard-code the output for the examples.
 */

#include <stdio.h>

#define MIN_VALID_DISTANCE 2
#define MAX_VALID_DISTANCE 400

#define LEVEL_SENSOR_ERROR 0
#define LEVEL_EMERGENCY_STOP 1
#define LEVEL_SLOW 2
#define LEVEL_CAUTION 3
#define LEVEL_CLEAR 4

#define MAX_REQUESTED_SPEED 100

typedef struct {
    int valid;
    int safeSpeed;
    int level;
} SpeedReport;

/* Calculate a safe speed and return the result as a structure. */
SpeedReport calculateSpeed(int distanceCm, int requestedSpeed);

int main(void)
{
    int distanceCm;
    int requestedSpeed;

    printf("Robot Adaptive Speed Controller\n");
    printf("Enter obstacle distance (2-400 cm): ");

    if (scanf("%d", &distanceCm) != 1) {
        printf("Invalid input. Enter an integer distance.\n");
        return 1;
    }

    printf("Enter requested speed (0-100%%): ");
    if (scanf("%d", &requestedSpeed) != 1) {
        printf("Invalid input. Enter an integer speed.\n");
        return 1;
    }

    if (requestedSpeed < 0 || requestedSpeed > MAX_REQUESTED_SPEED) {
        printf("Requested speed must be between 0 and 100.\n");
        return 1;
    }

    SpeedReport report = calculateSpeed(distanceCm, requestedSpeed);

    printf("\n--- Speed Controller Report ---\n");
    if (!report.valid) {
        printf("Sensor status : INVALID READING\n");
        printf("Safe speed    : N/A\n");
        return 0;
    }

    printf("Safe speed    : %d%%\n", report.safeSpeed);
    printf("Control level : ");

    if (report.level == LEVEL_EMERGENCY_STOP) {
        printf("EMERGENCY STOP\n");
    } else if (report.level == LEVEL_SLOW) {
        printf("SLOW\n");
    } else if (report.level == LEVEL_CAUTION) {
        printf("CAUTION\n");
    } else {
        printf("CLEAR\n");
    }

    return 0;
}

SpeedReport calculateSpeed(int distanceCm, int requestedSpeed)
{
    SpeedReport report = {0, 0, LEVEL_SENSOR_ERROR};

    /* TODO 1: Reject distances outside the inclusive range 2-400 cm. */
    /* TODO 2: For 2-29 cm, set safe speed to 0 and level to EMERGENCY_STOP. */
    /* TODO 3: For 30-79 cm, set safe speed to 40% of requestedSpeed. */
    /* TODO 4: For 80-149 cm, set safe speed to 70% of requestedSpeed. */
    /* TODO 5: For 150-400 cm, keep requestedSpeed and set level to CLEAR. */
    /* TODO 6: Mark valid readings as valid and return the completed report. */

    (void)distanceCm;    /* Remove when you use this parameter. */
    (void)requestedSpeed; /* Remove when you use this parameter. */

    return report;
}
