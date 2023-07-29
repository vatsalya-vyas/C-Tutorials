#include <stdio.h>
// Q) Write a program to check if a number is odd or even
int main()
{
    int a;
    printf("Enter a Number : ");
    scanf("%d", &a);
    printf("%d", a % 2 == 0);
    return 0;
}