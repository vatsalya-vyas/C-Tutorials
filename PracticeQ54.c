// Q) Write a program to store the data of 3 students

#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    printf("Student Record\n");

    struct student s1;
    strcpy(s1.name, "Amandeep");
    s1.roll = 10;
    s1.cgpa = 7.30;

    printf("The Name of the Student is : %s\n", s1.name);
    printf("The Roll of the Student is : %d\n", s1.roll);
    printf("The CGPA of the Student is : %f\n", s1.cgpa);
    printf("\n");
    struct student s2;
    strcpy(s2.name, "Vatsalya");
    s2.roll = 62;
    s2.cgpa = 7.62;

    printf("The Name of the Student is : %s\n", s2.name);
    printf("The Roll of the Student is : %d\n", s2.roll);
    printf("The CGPA of the Student is : %f\n", s2.cgpa);
    printf("\n");
    struct student s3;
    strcpy(s3.name, "Rohit");
    s3.roll = 47;
    s3.cgpa = 7.50;

    printf("The Name of the Student is : %s\n", s3.name);
    printf("The Roll of the student is : %d\n", s3.roll);
    printf("The CGPA of the Student is : %f\n", s3.cgpa);

    return 0;
}