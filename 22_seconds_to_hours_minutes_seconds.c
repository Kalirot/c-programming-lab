#include <stdio.h>

int main(void)
{
    int seconds, hours, minutes, remainingSeconds;

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    if (seconds < 0) {
        printf("Invalid input\n");
        return 1;
    }

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    remainingSeconds = seconds % 60;

    printf("There are:\n");
    printf("H:M:S - %d:%d:%d\n",
           hours, minutes, remainingSeconds);

    return 0;
}
