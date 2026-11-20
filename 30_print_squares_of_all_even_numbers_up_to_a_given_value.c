#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Input the value: ");
    scanf("%d", &n);

    printf("List of square of each one of the even values from 1 to %d :\n", n);
    for (i = 2; i <= n; i += 2)
        printf("%d^2 = %d\n", i, i * i);

    return 0;
}
