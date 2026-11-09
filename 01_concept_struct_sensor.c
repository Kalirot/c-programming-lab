/* Day 02 - Concept Builder
   Exp 8: Structure to hold robot sensor data */
#include <stdio.h>

struct Sensor {
    int id;
    char name[20];
    float value;
};

int main(void) {
    struct Sensor s[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter sensor %d (id name value): ", i + 1);
        scanf("%d %19s %f", &s[i].id, s[i].name, &s[i].value);
    }

    printf("\n%-5s%-12s%s\n", "ID", "Name", "Value");
    for (int i = 0; i < 3; i++) {
        printf("%-5d%-12s%.2f\n", s[i].id, s[i].name, s[i].value);
    }
    return 0;
}
