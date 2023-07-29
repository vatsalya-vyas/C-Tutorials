// Q)Write a function to print "Hot" or "Cold" depending
// on the temperature user enters.
#include <stdio.h>
void printTemperature()
{
    float Temperature;
    printf("Enter the Temperature : ");
    scanf("%f", &Temperature);

    if (Temperature >= 25)
    {
        printf("Hot\n");
    }
    else
        printf("Cold");
}
int main()
{
    printTemperature();
    return 0;
}