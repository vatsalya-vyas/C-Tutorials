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
    struct student mca[100];
    mca[0].roll = 18;
    mca[0].cgpa = 7.62;
    strcpy(mca[0].name, "Vatsalya");
    printf("Student Name is : %s\n", mca[0].name);
    printf("Student Roll is : %d\n", mca[0].roll);
    printf("Student CGPA is : %f\n", mca[0].cgpa);
    return 0;
}