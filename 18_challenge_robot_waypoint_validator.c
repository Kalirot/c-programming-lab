/* Day 06 Challenge 3: Robot Waypoint Validator
 * Topics: structures, arrays, pointers, functions, input validation
 * Robot operating area: x,y each in [-100,100], inclusive.
 * Maximum route size: 10 points. Manhattan distance = |dx| + |dy|.
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX_WAYPOINTS 10
#define COORD_LIMIT 100

typedef struct { int x; int y; } Waypoint;

int isWaypointValid(const Waypoint *point) {
    /* TODO: Check pointer and coordinate limits. */
    (void)point;
    return 0;
}
int validateRoute(const Waypoint *route, int count) {
    /* TODO: Return first invalid index, -1 if all valid, -2 for bad input. */
    (void)route; (void)count;
    return -2;
}
int calculateManhattanDistance(const Waypoint *a, const Waypoint *b) {
    /* TODO: Return Manhattan distance; return -1 for NULL pointers. */
    (void)a; (void)b;
    return -1;
}
int totalRouteDistance(const Waypoint *route, int count) {
    /* TODO: Sum consecutive waypoint distances; -1 for invalid input. */
    (void)route; (void)count;
    return -1;
}
int main(void) {
    Waypoint validRoute[] = {{0,0}, {10,5}, {10,20}, {-100,100}};
    Waypoint invalidRoute[] = {{0,0}, {101,5}, {10,20}};
    int validCount = (int)(sizeof(validRoute)/sizeof(validRoute[0]));
    int invalidCount = (int)(sizeof(invalidRoute)/sizeof(invalidRoute[0]));
    /* TODO: Validate both routes and print valid route total distance.
       Include boundary tests at (-100,-100) and (100,100). */
    (void)validCount; (void)invalidCount;
    return 0;
}
