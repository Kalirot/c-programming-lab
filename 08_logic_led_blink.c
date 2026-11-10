/* Day 03 - Logic Builder
   Exp 11: Simulate LED blinking using loops and delay logic */
#include <stdio.h>

/* Simulated delay: prints each tick */
void delay(int ticks) {
    printf("  [tick");
    for (int t = 1; t <= ticks; t++) {
        printf(" %d", t);
    }
    printf("]");
}

int main(void) {
    int blinks, ticks;

    printf("Enter blinks and delay ticks: ");
    scanf("%d %d", &blinks, &ticks);

    if (blinks < 1 || ticks < 1) {
        printf("Values must be positive.\n");
        return 1;
    }

    for (int i = 1; i <= blinks; i++) {
        printf("Blink %d: LED ON", i);
        delay(ticks);
        printf("  LED OFF");
        delay(ticks);
        printf("\n");
    }

    printf("Total ticks: %d\n", blinks * 2 * ticks);
    return 0;
}
