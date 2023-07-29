#include <stdio.h>
// int sum(int x, int y);
void printTable(int n);
int main()
{
    // int a, b;
    // printf("Enter a value of a : ");
    // scanf("%d", &a);
    // printf("Enter a value of b : ");
    // scanf("%d", &b);

    // int s = sum(a, b);
    // printf("The sum is : %d", s);
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    printTable(n); // argument/actual parameter
    return 0;
}
// int sum(int x, int y)
// {
//     return x + y;
// }

void printTable(int n) // parameter//formal parameter
{
    printf("Multiplication Table of : %d\n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d", n);
        printf("x");
        printf("%d", i);
        printf("=");
        printf("%d\n", n * i);
    }
}