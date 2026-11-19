#include <stdio.h>

int main(void)
{
    float a, b, c;

    printf("Input the first number: ");
    scanf("%f", &a);
    printf("Input the second number: ");
    scanf("%f", &b);
    printf("Input the third number: ");
    scanf("%f", &c);

    if (a > 0 && b > 0 && c > 0 &&
        a + b > c && a + c > b && b + c > a)
        printf("Perimeter = %.1f\n", a + b + c);
    else
        printf("Triangle is not possible with these values.\n");

    return 0;
}
