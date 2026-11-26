#include <stdio.h>

int main(void)
{
    int p, q, i, j, num = 1;

    printf("Input number of lines: ");
    scanf("%d", &p);
    printf("Number of characters in a line: ");
    scanf("%d", &q);

    for (i = 1; i <= p; i++)
    {
        for (j = 1; j <= q; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
