#include<stdio.h>
// Q)Write a program to check if given character is digit
// or not.
int main(){
    char val;
    printf("\nEnter the digit : ");
    scanf("%c",&val);
    if (val>='0'&& val <='9' )
    {      
    printf("The Given character is digit");
    }
    else
    {
        printf("The Character is not a digit");
    }
    
    return 0;
}