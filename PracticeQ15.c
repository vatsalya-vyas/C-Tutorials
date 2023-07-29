#include <stdio.h>

int main() // Q) Print the sum of first n Natural numbers
{
    int n;
    printf("Enter The Number : ");
    scanf("%d", &n);

    int sum = 0;
    for (int j = n; j >= 1; j--)
    {
        sum = sum + j;
        printf("%d\n", j);
    }
    printf("Sum is %d\n", sum);

    // for (int i = n; i >= 1; i--)
    // {
    //     printf("%d\n", i);
    // }
    return 0;
}