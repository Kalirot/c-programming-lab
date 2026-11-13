/*
 * Day 05 Challenge 1: Robot Command Dispatcher
 * Topics: Strings + Functions + switch-case
 *
 * TODO: Parse a short operator command and return the matching robot action.
 * Commands are case-sensitive and must match exactly.
 */
#include <stdio.h>
#include <string.h>

#define COMMAND_LENGTH 24

typedef enum {
    ACTION_INVALID,
    ACTION_FORWARD,
    ACTION_REVERSE,
    ACTION_LEFT,
    ACTION_RIGHT,
    ACTION_STOP
} RobotAction;

RobotAction parseCommand(const char command[]);

int main(void)
{
    char command[COMMAND_LENGTH];

    printf("Robot Command Dispatcher\n");
    printf("Enter command (FORWARD, REVERSE, LEFT, RIGHT, STOP): ");

    if (scanf("%23s", command) != 1) {
        printf("Input error.\n");
        return 1;
    }

    RobotAction action = parseCommand(command);

    printf("Dispatch result: ");
    switch (action) {
        case ACTION_FORWARD: printf("MOVE FORWARD\n"); break;
        case ACTION_REVERSE: printf("MOVE REVERSE\n"); break;
        case ACTION_LEFT:    printf("TURN LEFT\n"); break;
        case ACTION_RIGHT:   printf("TURN RIGHT\n"); break;
        case ACTION_STOP:    printf("MOTOR STOP\n"); break;
        default:             printf("UNKNOWN COMMAND - KEEP MOTORS STOPPED\n"); break;
    }
    return 0;
}

RobotAction parseCommand(const char command[])
{
    /* TODO: Compare the complete string with each supported command.
       Return the matching enum value. Unknown commands must return
       ACTION_INVALID. Use strcmp(); do not compare only the first letter. */
    (void)command;
    return ACTION_INVALID;
}
