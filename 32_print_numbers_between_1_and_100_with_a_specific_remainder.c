#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Input an integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    for (i = 1; i <= 100; i++)
    {
        if (i % n == 3)
            printf("%d\n", i);
    }

    return 0;
}
