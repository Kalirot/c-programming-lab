/*
 * Day 05 Challenge 3: Robot Event Logger
 * Topics: File handling + Structures + Loops
 *
 * Record a fixed number of robot events in a text file, then read the file
 * back and count events by severity. Complete the TODO sections.
 */
#include <stdio.h>

#define EVENT_COUNT 4
#define NAME_LENGTH 32
#define LOG_FILE "robot_events.txt"

typedef struct {
    char name[NAME_LENGTH];
    int severity; /* 1 = INFO, 2 = WARNING, 3 = CRITICAL */
} RobotEvent;

int writeEvents(const RobotEvent events[], int count);
int countSeverity(const char filename[], int targetSeverity);

int main(void)
{
    RobotEvent events[EVENT_COUNT];

    printf("Robot Event Logger\n");
    printf("Enter %d events. Severity: 1=INFO, 2=WARNING, 3=CRITICAL\n", EVENT_COUNT);

    for (int i = 0; i < EVENT_COUNT; i++) {
        printf("Event %d name (one word): ", i + 1);
        if (scanf("%31s", events[i].name) != 1) {
            printf("Invalid event name.\n");
            return 1;
        }
        printf("Severity: ");
        if (scanf("%d", &events[i].severity) != 1 ||
            events[i].severity < 1 || events[i].severity > 3) {
            printf("Severity must be 1, 2, or 3.\n");
            return 1;
        }
    }

    if (!writeEvents(events, EVENT_COUNT)) {
        printf("Could not write event log.\n");
        return 1;
    }

    printf("\nEvent log saved to %s\n", LOG_FILE);
    printf("INFO count     : %d\n", countSeverity(LOG_FILE, 1));
    printf("WARNING count  : %d\n", countSeverity(LOG_FILE, 2));
    printf("CRITICAL count : %d\n", countSeverity(LOG_FILE, 3));
    return 0;
}

int writeEvents(const RobotEvent events[], int count)
{
    /* TODO: Open LOG_FILE in write mode. Write each event as:
       event_name severity
       Check fopen() before writing, close the file, and return 1 on
       success or 0 on failure. */
    (void)events;
    (void)count;
    return 0;
}

int countSeverity(const char filename[], int targetSeverity)
{
    /* TODO: Open filename in read mode. Read event-name/severity pairs
       in a loop until fscanf() can no longer read a complete pair.
       Count and return entries whose severity equals targetSeverity.
       If the file cannot be opened, return 0. Always close an opened file. */
    (void)filename;
    (void)targetSeverity;
    return 0;
}
