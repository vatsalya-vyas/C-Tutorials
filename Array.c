#include <stdio.h>
int main()
{
    // int no[] = {7, 18, 8, 5};
    int marks[3];
    printf("Enter Maths Marks  : ");
    scanf("%d", &marks[0]);

    printf("Enter Science Marks : ");
    scanf("%d", &marks[1]);

    printf("Enter CS Marks : ");
    scanf("%d", &marks[2]);

    printf("Maths=%d, Science=%d, CS=%d", marks[0], marks[1], marks[2]);

    return 0;
}