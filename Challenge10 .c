/*
 * Day 04 Challenge: Ultrasonic Sensor Diagnostic Report
 * File: 10_challenge_ultrasonic_sensor_diagnostics.c
 *
 * Topics: Arrays + Functions + Structures
 * Supporting skills: Loops + if/else
 *
 * Complete the TODO section inside analyzeReadings(). Do not hard-code the
 * report values; calculate them from the readings entered by the user.
 */

#include <stdio.h>

#define SAMPLE_COUNT 8
#define MIN_VALID_CM 2
#define MAX_VALID_CM 400

#define STATUS_FAULT 0
#define STATUS_WARNING 1
#define STATUS_HEALTHY 2

typedef struct {
    int validCount;
    int invalidCount;
    int nearestCm;
    int farthestCm;
    int status;
} SensorReport;

/* Analyze the readings and return a complete diagnostic report. */
SensorReport analyzeReadings(const int readings[], int size);

int main(void)
{
    int readings[SAMPLE_COUNT];

    printf("Robot Ultrasonic Sensor Diagnostic\n");
    printf("Enter %d distance readings in centimeters.\n\n", SAMPLE_COUNT);

    for (int i = 0; i < SAMPLE_COUNT; i++) {
        printf("Reading %d: ", i + 1);

        if (scanf("%d", &readings[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    SensorReport report = analyzeReadings(readings, SAMPLE_COUNT);

    printf("\n--- Sensor Diagnostic Report ---\n");
    printf("Valid readings   : %d\n", report.validCount);
    printf("Invalid readings : %d\n", report.invalidCount);

    if (report.validCount > 0) {
        printf("Nearest distance : %d cm\n", report.nearestCm);
        printf("Farthest distance: %d cm\n", report.farthestCm);
    } else {
        printf("Nearest distance : N/A (no valid readings)\n");
        printf("Farthest distance: N/A (no valid readings)\n");
    }

    printf("Sensor status    : ");
    if (report.status == STATUS_HEALTHY) {
        printf("HEALTHY\n");
    } else if (report.status == STATUS_WARNING) {
        printf("WARNING\n");
    } else {
        printf("FAULT\n");
    }

    return 0;
}

SensorReport analyzeReadings(const int readings[], int size)
{
    SensorReport report = {0, 0, 0, 0, STATUS_FAULT};

    /* TODO 1: Loop through every reading. */
    /* TODO 2: A reading is valid only when it is from 2 cm through 400 cm. */
    /* TODO 3: Count valid and invalid readings. */
    /* TODO 4: For valid readings only, find the nearest and farthest values. */
    /* TODO 5: Set status using the valid-reading count:
       - 7 or 8 valid readings: STATUS_HEALTHY
       - 5 or 6 valid readings: STATUS_WARNING
       - 0 through 4 valid readings: STATUS_FAULT
    */
    /* TODO 6: Return the completed report. */

    (void)readings; /* Remove this line when you start using readings. */
    (void)size;     /* Remove this line when you start using size. */

    return report;
}
