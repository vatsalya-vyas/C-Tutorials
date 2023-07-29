// Q)Write a program in C to find the maximum number
// between two numbers using a pointer.
#include <stdio.h>

int findMax(int *ptr1, int *ptr2)
{
    return (*ptr1 > *ptr2) ? *ptr1 : *ptr2;
}

int main()
{
    int num1, num2;
    int *ptr1, *ptr2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    int max = findMax(ptr1, ptr2);

    printf("The maximum number is: %d\n", max);

    return 0;
}
