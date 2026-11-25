#include <stdio.h>

int main(void)
{
    int a, b, start, end, i, sum = 0, first = 1;

    printf("Input a pair of numbers (for example 10,2): \n");
    printf("Input first number of the pair: ");
    scanf("%d", &a);
    printf("Input second number of the pair: ");
    scanf("%d", &b);

    /* Works whichever number is larger */
    if (a < b) {
        start = a;
        end = b;
    } else {
        start = b;
        end = a;
    }

    printf("List of odd numbers: ");
    for (i = start + 1; i < end; i++) {
        if (i % 2 != 0) {
            if (first) {
                printf("%d\n", i);
                first = 0;
            } else {
                printf("%d\n", i);
            }
            sum += i;
        }
    }
    printf("Sum=%d\n", sum);

    return 0;
}
