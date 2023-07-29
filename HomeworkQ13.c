// Q) Write a function to find square root of a number.
#include <stdio.h>
#include <math.h>

double findSQRT(double N) { return sqrt(N); }
int main()
{
    int N;
    printf("Enter the value : ");
    scanf("%d", &N);

    printf("The square root of a number is : %f", findSQRT(N));
    return 0;
}