/*
 * Day 07 - Challenge 3: Student Records
 * Topics: structures, pointers, functions, file handling, conditions
 *
 * Requirements:
 * 1. Define a Student structure with rollNumber, name, and marks.
 * 2. Implement inputStudent() using a pointer to a Student.
 * 3. Implement displayStudent() using a pointer to a const Student.
 * 4. Implement saveStudent() to append one record to "students.txt".
 * 5. Validate marks so they are between 0 and 100.
 * 6. Print PASS for marks >= 40, otherwise FAIL.
 *
 * Use a maximum name length of 39 characters.
 */
#include <stdio.h>

#define NAME_SIZE 40

typedef struct {
    int rollNumber;
    char name[NAME_SIZE];
    float marks;
} Student;

int inputStudent(Student *student) {
    /* TODO: Read roll number, name, and marks.
       Validate input and marks range.
       Return 1 on success, 0 on invalid input. */
    (void)student;
    return 0;
}

void displayStudent(const Student *student) {
    /* TODO: Print all fields and PASS/FAIL status. */
    (void)student;
}

int saveStudent(const Student *student, const char *filename) {
    /* TODO: Open filename in append mode, write one record,
       close the file, and return 1 on success or 0 on failure. */
    (void)student;
    (void)filename;
    return 0;
}

int main(void) {
    Student student;

    if (!inputStudent(&student)) {
        printf("Invalid student data.\\n");
        return 1;
    }

    displayStudent(&student);

    if (saveStudent(&student, "students.txt")) {
        printf("Record saved successfully.\\n");
    } else {
        printf("Could not save record.\\n");
        return 1;
    }

    return 0;
}
