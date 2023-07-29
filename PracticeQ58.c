// Q)Write a Program to store the marks of 30 students in class
#include <stdio.h>

#define MAX_STUDENTS 30

int main()
{
    int marks[MAX_STUDENTS];
    int i;

    printf("Enter the marks of 30 students:\n");

    // Read marks for each student
    for (i = 0; i < MAX_STUDENTS; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nMarks of the students:\n");

    // Display marks for each student
    for (i = 0; i < MAX_STUDENTS; i++)
    {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
