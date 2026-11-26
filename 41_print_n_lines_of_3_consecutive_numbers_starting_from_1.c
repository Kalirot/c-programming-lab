#include <stdio.h>

int main(void)
{
    int n, i, num = 1;

    printf("Input number of lines: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d %d %d\n", num, num + 1, num + 2);
        num += 3;
    }

    return 0;
}
