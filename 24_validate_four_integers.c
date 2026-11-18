#include <stdio.h>

int main(void)
{
    int p, q, r, s;

    printf("Input the first integer (p): ");
    scanf("%d", &p);

    printf("Input the second integer (q): ");
    scanf("%d", &q);

    printf("Input the third integer (r): ");
    scanf("%d", &r);

    printf("Input the fourth integer (s): ");
    scanf("%d", &s);

    if (q > 0 &&
        r > 0 &&
        s > 0 &&
        p % 2 == 0 &&
        q > r &&
        s > p &&
        (long long)r + s > (long long)p + q)
    {
        printf("Correct values\n");
    }
    else
    {
        printf("Wrong values\n");
    }

    return 0;
}
