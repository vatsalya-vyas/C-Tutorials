#include <stdio.h>
// Q) Print reverse of the table for a number n
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    printf("Multiplication Table of ");
    printf("%d\n", n);
    for (int i = 10; i >= 1; i--)
    {
        printf("%d", n);
        printf("x");
        printf("%d", i);
        printf("=");
        printf("%d\n", n * i);
    }
    return 0;
}