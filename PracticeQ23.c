#include <stdio.h>
// Q)Calculate the sum of all numbers between 5 and 50
// (including 5&50)
int main()
{
    int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        sum = sum + i;
    }

    printf("Sum is : %d\n", sum);
    return 0;
}