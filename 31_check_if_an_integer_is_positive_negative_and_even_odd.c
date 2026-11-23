#include <stdio.h>

int main(void)
{
    int n;

    printf("Input an integer: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        if (n % 2 == 0)
            printf("Positive Even\n");   /* 0 is treated as even */
        else
            printf("Positive Odd\n");
    }
    else
    {
        if (n % 2 == 0)
            printf("Negative Even\n");
        else
            printf("Negative Odd\n");
    }

    return 0;
}
