// Q)Write a functions to calculate area of a square, a circle & rectangle
#include <stdio.h>
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);
int main()
{
    float a, b;
    printf("Enter First Number : ");
    scanf("%f", &a);
    printf("Enter Second Number : ");
    scanf("%f", &b);

    printf("Area is : %f", rectangleArea(a, b));

    return 0;
}

float squareArea(float side)
{
    return side * side;
}

float circleArea(float rad)
{
    return 3.14 * rad * rad;
}

float rectangleArea(float a, float b)
{
    return a * b;
}