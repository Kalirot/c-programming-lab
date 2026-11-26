#include <stdio.h>

int main(void)
{
    int a, b, i, temp;

    printf("Input the first integer: ");
    scanf("%d", &a);
    printf("Input the second integer: ");
    scanf("%d", &b);

    if (a > b)          /* make sure a is the smaller one */
    {
        temp = a;
        a = b;
        b = temp;
    }

    /* numbers strictly between the two given integers */
    for (i = a + 1; i < b; i++)
    {
        if (i % 7 == 2 || i % 7 == 3)
            printf("%d\n", i);
    }

    return 0;
}
