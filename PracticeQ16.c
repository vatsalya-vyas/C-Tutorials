#include <stdio.h>
// Q) Print the table of a number input by the user
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    printf("Multiplication table of ");
    printf("%d\n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d", n);
        printf("x");
        printf("%d", i);
        printf("=");
        printf("%d\n", n * i);
    }
    return 0;
}