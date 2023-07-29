// Q)Write a program to print prime numbers in a range
#include <stdio.h>
int main()
{
    int n1, n2, i, j;
    printf("Enter Range 1 : ");
    scanf("%d", &n1);
    printf("Enter Range 2 : ");
    scanf("%d", &n2);
    for (i = n1; i <= n2; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            printf("%d\n", j);
    }
    return 0;
}