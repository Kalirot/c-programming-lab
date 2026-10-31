#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    for (i = 1; i <= n; i++)
        factorial *= i;

    printf("Factorial = %lld\n", factorial);

    return 0;
}
