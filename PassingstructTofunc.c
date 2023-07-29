#include <stdio.h>
struct student
{
    int roll;
    char name[100];
    float cgpa;
};

void printInfo(struct student s1);

int main()
{
    struct student s1 = {62, "Vatsalya", 7.63};
    printInfo(s1);
    return 0;
}

void printInfo(struct student s1)
{
    printf("Student Info : \n");
    printf("The Roll no of student is : %d\n", s1.roll);
    printf("The Name  of student is : %s\n", s1.name);
    printf("The CGPA  of student is : %f\n", s1.cgpa);
}