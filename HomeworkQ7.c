#include<stdio.h>
// Q) Write a program to check if a given number is
// Armstrong number or not.
int main(){
    int n,r,sum=0,temp;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
    }
    if(temp==sum){
        printf("Armstrong number ");
    }
    else
        printf("Not a Armstrong number ");
    return 0;
}