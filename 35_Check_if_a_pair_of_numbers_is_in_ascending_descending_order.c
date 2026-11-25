#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Input a pair of numbers (for example 10,2 : 2,10): \n");
    printf("Input first number of the pair: ");
    scanf("%d", &a);
    printf("Input second number of the pair: ");
    scanf("%d", &b);

    if (a > b)
        printf("The pair is in descending order!\n");
    else if (a < b)
        printf("The pair is in ascending order!\n");
    else
        printf("The two numbers are equal!\n");

    return 0;
}
