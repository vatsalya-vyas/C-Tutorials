// Q)Write a program to check if a number is prime or not
#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        printf("Prime Number");
    else
        printf("Not a Prime Number");
    return 0;
}
