#include <stdio.h>

int main(void)
{
    int totalDays, years, months, days, remainingDays;

    printf("Input number of days: ");
    scanf("%d", &totalDays);

    if (totalDays < 0) {
        printf("Invalid input\n");
        return 1;
    }

    years = totalDays / 365;
    remainingDays = totalDays % 365;

    months = remainingDays / 30;
    days = remainingDays % 30;

    printf("%d Year(s)\n", years);
    printf("%d Month(s)\n", months);
    printf("%d Day(s)\n", days);

    return 0;
}
