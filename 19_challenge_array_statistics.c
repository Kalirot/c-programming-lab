/*
 * Day 07 - Challenge 1: Array Statistics
 * Topics: arrays, loops, functions, arithmetic, if-else
 *
 * Requirements:
 * 1. Read exactly 5 integers into an array.
 * 2. Implement findSum(), findMaximum(), and countEven().
 * 3. Calculate and print the average.
 * 4. Print whether the average is positive, negative, or zero.
 * 5. Do not calculate the array results directly inside main().
 */
#include <stdio.h>

#define SIZE 5

int findSum(const int values[], int size) {
    /* TODO: Return the sum of all elements. */
    (void)values;
    (void)size;
    return 0;
}

int findMaximum(const int values[], int size) {
    /* TODO: Return the largest element. Assume size > 0. */
    (void)values;
    (void)size;
    return 0;
}

int countEven(const int values[], int size) {
    /* TODO: Return how many elements are even. */
    (void)values;
    (void)size;
    return 0;
}

int main(void) {
    int values[SIZE];
    int i;
    int sum;

    for (i = 0; i < SIZE; i++) {
        printf("Enter integer %d: ", i + 1);
        if (scanf("%d", &values[i]) != 1) {
            printf("Invalid input.\\n");
            return 1;
        }
    }

    /* TODO: Call your functions and print sum, maximum, even count,
       average, and whether the average is positive, negative, or zero. */
    sum = 0;
    (void)sum;

    return 0;
}
