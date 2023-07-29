// Q)Use library functions to calculate the square of a number given by the user
#include <stdio.h>
#include <math.h>
int main()
{
    float n;
    printf("Enter the value : ");
    scanf("%f", &n);

    printf("The Square of a Number is : %f", pow(n, 2));

    return 0;
}