#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};
int main()
{
    struct student s1 = {62, 7.62, "Vatsalya"};
    printf("Student Roll no : %d\n", s1.roll); // Initializing Structure

    struct student *ptr = &s1;
    printf("Student CGPA is : %f\n", (*ptr).cgpa); // Poitner Structure
    printf("Student Name is : %s\n", strcpy(s1.name, "Vatsalya"));
    return 0;
}