#include <stdio.h>

int main(void)
{
    int i, num, highest, position = 1;

    printf("Input 5 integers:\n");
    scanf("%d", &highest);          /* first number is the initial highest */

    for (i = 2; i <= 5; i++)
    {
        scanf("%d", &num);
        if (num > highest)
        {
            highest = num;
            position = i;
        }
    }

    printf("Highest value: %d\n", highest);
    printf("Position: %d\n", position);

    return 0;
}
