/*
 * Day 04 Challenge 3: Line-Following Robot Decision
 * File: 12_challenge_line_following_robot.c
 *
 * Topics: Arrays + Loops + Functions + Structures + if/else
 *
 * Five infrared sensors are mounted from left to right under the robot.
 * Each sensor reads 1 when it detects the dark line and 0 otherwise.
 * Complete the TODOs in analyzeLine().
 */

#include <stdio.h>

#define SENSOR_COUNT 5
#define ACTION_LOST 0
#define ACTION_INTERSECTION 1
#define ACTION_LEFT 2
#define ACTION_STRAIGHT 3
#define ACTION_RIGHT 4

static const int sensorWeights[SENSOR_COUNT] = {-2, -1, 0, 1, 2};

typedef struct {
    int activeSensors;
    int positionScore;
    int action;
} LineReport;

/* Analyze the five sensors and return a movement decision. */
LineReport analyzeLine(const int sensors[], int size);

int main(void)
{
    int sensors[SENSOR_COUNT];

    printf("Line-Following Robot Simulator\n");
    printf("Enter five sensor values from left to right (1=line, 0=no line).\n\n");

    for (int i = 0; i < SENSOR_COUNT; i++) {
        printf("Sensor %d: ", i + 1);
        if (scanf("%d", &sensors[i]) != 1 ||
            (sensors[i] != 0 && sensors[i] != 1)) {
            printf("Invalid input. Each sensor must be 0 or 1.\n");
            return 1;
        }
    }

    LineReport report = analyzeLine(sensors, SENSOR_COUNT);

    printf("\n--- Line-Following Decision ---\n");
    printf("Active sensors : %d\n", report.activeSensors);
    printf("Position score : %d\n", report.positionScore);
    printf("Robot action   : ");

    if (report.action == ACTION_LOST) {
        printf("STOP - LINE LOST\n");
    } else if (report.action == ACTION_INTERSECTION) {
        printf("STOP - INTERSECTION DETECTED\n");
    } else if (report.action == ACTION_LEFT) {
        printf("TURN LEFT\n");
    } else if (report.action == ACTION_RIGHT) {
        printf("TURN RIGHT\n");
    } else {
        printf("MOVE STRAIGHT\n");
    }

    return 0;
}

LineReport analyzeLine(const int sensors[], int size)
{
    LineReport report = {0, 0, ACTION_LOST};

    /* TODO 1: Count how many sensors detect the line (value 1). */
    /* TODO 2: Calculate positionScore as the sum of sensor[i] * weight[i]. */
    /* TODO 3: If no sensors detect the line, choose ACTION_LOST. */
    /* TODO 4: If all five sensors detect the line, choose ACTION_INTERSECTION. */
    /* TODO 5: Otherwise, negative score = ACTION_LEFT. */
    /* TODO 6: Otherwise, positive score = ACTION_RIGHT. */
    /* TODO 7: A zero score means ACTION_STRAIGHT. Return the report. */

    (void)sensors; /* Remove when you use this parameter. */
    (void)size;    /* Remove when you use this parameter. */

    return report;
}
