/* Day 02 - Logic Builder
   Exp 8: Structure with status field, counts and highest value */
#include <stdio.h>
#include <string.h>

#define N 4

struct Sensor {
    int id;
    char name[20];
    float value;
    char status[10];
};

int main(void) {
    struct Sensor s[N];
    int low = 0, ok = 0, high = 0;
    int maxIndex = 0;

    printf("Enter %d sensors (id name value):\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d %19s %f", &s[i].id, s[i].name, &s[i].value);

        if (s[i].value < 20) {
            strcpy(s[i].status, "LOW");
            low++;
        } else if (s[i].value <= 80) {
            strcpy(s[i].status, "OK");
            ok++;
        } else {
            strcpy(s[i].status, "HIGH");
            high++;
        }

        if (s[i].value > s[maxIndex].value) {
            maxIndex = i;
        }
    }

    printf("\n%-5s%-12s%-10s%s\n", "ID", "Name", "Value", "Status");
    for (int i = 0; i < N; i++) {
        printf("%-5d%-12s%-10.2f%s\n", s[i].id, s[i].name, s[i].value, s[i].status);
    }

    printf("\nLOW: %d  OK: %d  HIGH: %d\n", low, ok, high);
    printf("Highest: %s (%.2f)\n", s[maxIndex].name, s[maxIndex].value);
    return 0;
}
