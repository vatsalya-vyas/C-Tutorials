#include <stdio.h>
// Q) Write a program to check if a student passed or failed
// a.marks > 30
// b.marks <= 30
int main()
{
    int marks;
    printf("Enter Marks : ");
    scanf("%d", &marks);
    // if (marks <= 30)
    // {
    //     printf("FAIL");
    // }
    // else if (marks > 30 && marks <= 100)
    // {
    //     printf("PASS");
    // }
    // else
    // {
    //     ("Wrong Marks");
    // }
    marks <= 30 ? printf("Fail\n") : printf("Pass\n");
    return 0;
}