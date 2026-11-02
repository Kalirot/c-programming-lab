/* Day 01 - Logic Builder
   Exp 6: Switch-case to simulate robot modes (Idle, Active, Error) */
#include <stdio.h>

int main(void) {
    int choice;
    int running = 1;

    while (running) {
        printf("\n--- Robot Mode Menu ---\n");
        printf("1. Idle\n2. Active\n3. Error\n0. Exit\n");
        printf("Enter mode: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Mode: IDLE - motors off, sensors on standby\n");
                break;
            case 2:
                printf("Mode: ACTIVE - motors running, sensors reading\n");
                break;
            case 3:
                printf("Mode: ERROR - motors stopped, alarm ON\n");
                break;
            case 0:
                printf("Shutting down robot...\n");
                running = 0;
                break;
            default:
                printf("Invalid mode! Try again.\n");
        }
    }
    return 0;
}
