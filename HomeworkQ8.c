#include<stdio.h>
// Q) Write a program to check if the given number is a
// natural number.
int main(){
    int n=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n>=1){
        printf("Natural Number");
    }
    else{
        printf("Not a Natural Number");
    }
return 0;
}