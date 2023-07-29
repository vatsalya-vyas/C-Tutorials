#include <stdio.h>
#include <string.h>
struct student
{ // User Defined Datatype
    int roll;
    float cgpa;
    char name[100];
};
int main()
{
    struct student s1;
    s1.roll = 62;
    s1.cgpa = 7.62;
    // s1.name="Vatsalya";
    strcpy(s1.name, "Vatsalya");
    printf("Student Name : %s\n", s1.name);
    printf("Student Roll : %d\n", s1.roll);
    printf("Student CGPA : %f\n", s1.cgpa);
    return 0;
}