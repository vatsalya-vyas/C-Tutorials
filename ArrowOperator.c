#include <stdio.h>
struct student
{
    int roll;
    char name[100];
    float cgpa;
};
int main()
{
    struct student s1 = {62, "Vatsalya", 7.63};
    struct student *ptr = &s1;
    printf("The Roll no is : %d\n", ptr->roll); // ArrowOperator (->)
    printf("The Name is : %s\n", ptr->name);
    printf("The cgpa is : %f\n", ptr->cgpa);

    return 0;
}