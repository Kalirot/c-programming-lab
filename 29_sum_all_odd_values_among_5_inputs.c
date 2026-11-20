#include <stdio.h>

int main(void)
{
    int i, num, sum = 0;
    const char *pos[] = {"first", "second", "third", "fourth", "fifth"};

    for (i = 0; i < 5; i++)
    {
        printf("Input the %s number: ", pos[i]);
        scanf("%d", &num);
        if (num % 2 != 0)
            sum += num;
    }

    printf("Sum of all odd values: %d\n", sum);
    return 0;
}
