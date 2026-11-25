#include <stdio.h>

int main(void)
{
    double x, y;

    printf("Input two numbers: \n");
    printf("x: ");
    scanf("%lf", &x);
    printf("y: ");
    scanf("%lf", &y);

    if (y == 0)
        printf("Division is not possible\n");
    else
        printf("%.1f\n", x / y);

    return 0;
}
