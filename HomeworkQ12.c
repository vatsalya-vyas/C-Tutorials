// Q) Write a function to find sum of digits of a number.
#include <stdio.h>
int getSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    printf("%d", getSum(n));
    return 0;
}