#include<stdio.h>

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    if(number%2==0){
        printf("The number is Even");
    }
    else{
        printf("The number is Odd");
    }
    return 0;
}