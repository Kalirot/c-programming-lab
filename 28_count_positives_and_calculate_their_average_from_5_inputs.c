#include <stdio.h>

int main(void)
{
    int i, count = 0;
    float num, sum = 0;
    const char *pos[] = {"first", "second", "third", "fourth", "fifth"};

    for (i = 0; i < 5; i++)
    {
        printf("Input the %s number: ", pos[i]);
        scanf("%f", &num);
        if (num > 0)
        {
            count++;
            sum += num;
        }
    }

    printf("Number of positive numbers: %d\n", count);
    if (count > 0)
        printf("Average value of the said positive numbers: %.2f\n", sum / count);
    else
        printf("No positive numbers, so average cannot be calculated.\n");

    return 0;
}
