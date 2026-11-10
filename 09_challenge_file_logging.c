/* Day 03 - Exam/Practical Challenge
   Exp 10: File handling - log sensor readings into a text file */
#include <stdio.h>

#define MAX 10

int main(void) {
    int n;
    FILE *fp;

    printf("How many readings? ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Enter a number between 1 and %d.\n", MAX);
        return 1;
    }

    /* Write mode */
    fp = fopen("sensor_log.txt", "w");
    if (fp == NULL) {
        printf("Error: could not open file for writing.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        float value;
        printf("Enter reading %d: ", i);
        scanf("%f", &value);
        fprintf(fp, "Reading %d: %.2f\n", i, value);
    }
    fclose(fp);

    /* Read mode: print contents and calculate average */
    fp = fopen("sensor_log.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open file for reading.\n");
        return 1;
    }

    printf("--- Contents of sensor_log.txt ---\n");

    int num, count = 0;
    float val, sum = 0;
    while (fscanf(fp, "Reading %d: %f\n", &num, &val) == 2) {
        printf("Reading %d: %.2f\n", num, val);
        sum += val;
        count++;
    }
    fclose(fp);

    if (count > 0) {
        printf("Average from file: %.2f\n", sum / count);
    }
    return 0;
}
