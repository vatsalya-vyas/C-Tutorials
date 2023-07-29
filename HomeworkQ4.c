#include<stdio.h>
// Q) Write a program to print the average of 3 numbers ?
int main(){
int a,b,c;
printf("Enter the 3 numbers\n");
printf("\nEnter the value of Num1 : ");
scanf("%d",&a);
printf("\nEnter the value of Num2 : ");
scanf("%d",&b);
printf("\nEnter the value of Num3 : ");
scanf("%d",&c);
int sum=a+b+c;
printf("\nThe Average of 3 numbers is : %d",sum/3);
return 0;
}