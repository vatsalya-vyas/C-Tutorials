#include <stdio.h>
// Q)Write a program to check if a number is divisible by 2 or not
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("%d", n % 2 == 0);
    return 0;
}