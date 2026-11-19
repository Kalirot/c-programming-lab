#include <stdio.h>

int main(void)
{
    int n;

    printf("Input an integer: ");
    scanf("%d", &n);

    if (n < 0 || n > 80)
        printf("Error: number is negative or greater than 80.\n");
    else if (n <= 20)
        printf("Range [0, 20]\n");
    else if (n <= 40)
        printf("Range [21, 40]\n");
    else if (n <= 60)
        printf("Range [41, 60]\n");
    else
        printf("Range [61, 80]\n");

    return 0;
}
