/* Day 01 - Exam/Practical Challenge
   Exp 7: Command parsing using string manipulation (START / STOP) */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Convert string to uppercase in place */
void toUpperStr(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = toupper((unsigned char)s[i]);
    }
}

int main(void) {
    char cmd[50];
    int robotOn = 0;

    printf("Commands: START, STOP, STATUS, EXIT\n");

    while (1) {
        printf("> ");
        if (fgets(cmd, sizeof(cmd), stdin) == NULL) break;

        cmd[strcspn(cmd, "\n")] = '\0';   /* remove newline */
        toUpperStr(cmd);                  /* case-insensitive */

        if (strcmp(cmd, "START") == 0) {
            if (robotOn) printf("Robot is already running.\n");
            else { robotOn = 1; printf("Robot started.\n"); }
        } else if (strcmp(cmd, "STOP") == 0) {
            if (!robotOn) printf("Robot is already stopped.\n");
            else { robotOn = 0; printf("Robot stopped.\n"); }
        } else if (strcmp(cmd, "STATUS") == 0) {
            printf("Robot is %s.\n", robotOn ? "RUNNING" : "STOPPED");
        } else if (strcmp(cmd, "EXIT") == 0) {
            printf("Goodbye.\n");
            break;
        } else {
            printf("Unknown command: %s\n", cmd);
        }
    }
    return 0;
}
