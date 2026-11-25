#include <stdio.h>

int main(void)
{
    int password;

    printf("Input the password: ");
    while (scanf("%d", &password) == 1) {
        if (password == 1234) {
            printf("Correct password\n");
            break;            /* quit the program */
        }
        printf("Incorrect password\n");
        printf("Input the password: ");
    }

    return 0;
}
