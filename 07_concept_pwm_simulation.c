/* Day 03 - Concept Builder
   Exp 4: PWM pulse simulation using for loop */
#include <stdio.h>

#define STEPS 20

int main(void) {
    int duty;

    printf("Enter duty cycle (0-100): ");
    scanf("%d", &duty);

    if (duty < 0 || duty > 100) {
        printf("Invalid duty cycle.\n");
        return 1;
    }

    int highSteps = duty * STEPS / 100;

    printf("Signal: ");
    for (int i = 0; i < STEPS; i++) {
        if (i < highSteps) printf("#");
        else printf("_");
    }
    printf("\n");

    printf("Duty cycle: %d%%  HIGH steps: %d/%d\n", duty, highSteps, STEPS);
    return 0;
}
