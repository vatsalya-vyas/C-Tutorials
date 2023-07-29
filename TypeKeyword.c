#include <stdio.h>
#include <string.h>

typedef struct ComputerScienceStudent
{
    char name[100];
    int roll;
    float cgpa;
} CSE;
int main()
{
    CSE s1;

    s1.roll = 62;
    s1.cgpa = 7.63;
    strcpy(s1.name, "Vatsalya");

    printf("Student name is : %s\n", s1.name);
    return 0;
}