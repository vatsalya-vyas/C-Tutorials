#include<stdio.h>
/* Q) Write a program to calculate perimeter of rectangle
Take sides, a & b, from the user */
int main(){
    float a,b,c;
    printf("Enter the value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b : ");
    scanf("%f",&b);
    c=2*(a+b);
    printf("The Perimeter of rectangle is : %f",c);
    return 0;
}