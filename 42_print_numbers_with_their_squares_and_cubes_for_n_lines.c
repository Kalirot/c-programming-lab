#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Input number of lines: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        printf("%d %d %d\n", i, i * i, i * i * i);

    return 0;
}
