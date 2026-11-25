#include <stdio.h>

int main(void)
{
    double x, y;

    printf("Input the Coordinate(x,y): \n");
    printf("x: ");
    scanf("%lf", &x);
    printf("y: ");
    scanf("%lf", &y);

    if (x > 0 && y > 0)
        printf("Quadrant-I(+,+)\n");
    else if (x < 0 && y > 0)
        printf("Quadrant-II(-,+)\n");
    else if (x < 0 && y < 0)
        printf("Quadrant-III(-,-)\n");
    else if (x > 0 && y < 0)
        printf("Quadrant-IV(+,-)\n");
    else if (x == 0 && y == 0)
        printf("The point is at the origin (0,0)\n");
    else
        printf("The point lies on an axis (not in any quadrant)\n");

    return 0;
}
