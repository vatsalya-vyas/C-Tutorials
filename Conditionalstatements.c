#include<stdio.h>

int main(){
    //  int age;
    // printf("Enter your age : ");
    // scanf("%d",&age);
    // if(age<13){
    //     printf("You're a Kid ");
    // }
    // else if(age<18){
    //     printf("You're a Teenager ");
    // }
    
    // else{
    //     printf("You're an Adult ");
    // }  

    //Ternary operator 
    //Condition?If Statement True:If Statement False;
    int age;
    printf("Enter You're age : ");
    scanf("%d",&age);
    age>=18?printf("You're an adult"):printf("You're not an adult");
    return 0;
}