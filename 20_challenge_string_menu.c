/*
 * Day 07 - Challenge 2: String Menu
 * Topics: strings, arrays, switch-case, loops, functions
 *
 * Requirements:
 * 1. Read one word (maximum 49 characters).
 * 2. Display a menu:
 *      1. Count characters
 *      2. Convert lowercase letters to uppercase
 *      3. Count vowels
 *      4. Exit
 * 3. Use a switch statement to select the operation.
 * 4. Implement each operation as a separate function.
 * 5. Keep showing the menu until the user chooses Exit.
 *
 * Use standard C library functions only. You may include <ctype.h>
 * and <string.h>.
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TEXT_SIZE 50

int countCharacters(const char text[]) {
    /* TODO: Return the number of characters, excluding the null byte. */
    (void)text;
    return 0;
}

void convertToUppercase(char text[]) {
    /* TODO: Convert each character safely using toupper(). */
    (void)text;
}

int countVowels(const char text[]) {
    /* TODO: Count a, e, i, o, u in either uppercase or lowercase. */
    (void)text;
    return 0;
}

int main(void) {
    char text[TEXT_SIZE];
    int choice;

    printf("Enter one word (maximum 49 characters): ");
    if (scanf("%49s", text) != 1) {
        printf("Input error.\\n");
        return 1;
    }

    do {
        printf("\\n1. Count characters\\n");
        printf("2. Convert to uppercase\\n");
        printf("3. Count vowels\\n");
        printf("4. Exit\\n");
        printf("Choose: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\\n");
            return 1;
        }

        /* TODO: Use switch-case to call the correct function.
           Print a message for an invalid menu choice. */
    } while (choice != 4);

    return 0;
}
