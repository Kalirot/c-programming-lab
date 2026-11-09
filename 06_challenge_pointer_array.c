/* Day 02 - Exam/Practical Challenge
   Exp 9: Pointers with arrays (findMax, average, reverse in place) */
#include <stdio.h>

#define N 6

int findMax(int *p, int n) {
    int max = *p;
    for (int i = 1; i < n; i++) {
        p++;
        if (*p > max) max = *p;
    }
    return max;
}

float average(int *p, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *p;
        p++;
    }
    return (float)sum / n;
}

void reverse(int *p, int n) {
    int *start = p;
    int *end = p + n - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void printArray(int *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

int main(void) {
    int readings[N];

    printf("Enter %d readings: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &readings[i]);
    }

    printf("Max: %d\n", findMax(readings, N));
    printf("Average: %.2f\n", average(readings, N));

    printf("Original: ");
    printArray(readings, N);

    reverse(readings, N);

    printf("Reversed: ");
    printArray(readings, N);
    return 0;
}
