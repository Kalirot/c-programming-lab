/* Day 01 - Concept Builder
   Exp 5: Average sensor reading using function & array */
#include <stdio.h>

#define MAX 10

/* Returns the average of n readings stored in arr */
float averageReading(float arr[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

int main(void) {
    float readings[MAX];
    int n;

    printf("How many sensor readings (1-%d)? ", MAX);
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Invalid count.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Reading %d: ", i + 1);
        scanf("%f", &readings[i]);
    }

    float avg = averageReading(readings, n);
    float max = readings[0], min = readings[0];
    for (int i = 1; i < n; i++) {
        if (readings[i] > max) max = readings[i];
        if (readings[i] < min) min = readings[i];
    }

    printf("Average: %.2f\n", avg);
    printf("Max: %.2f\n", max);
    printf("Min: %.2f\n", min);
    return 0;
}
