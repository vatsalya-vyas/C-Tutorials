// Q)Ask the user to enter their firstName & print it back to them

// also try with there fullName

#include <stdio.h>
int main()
{
    // char firstName[50];
    // printf("Enter your name : ");
    // scanf("%s", firstName);
    // printf("Your name is : %s", firstName);

    // char fullName[100];
    // printf("Enter your name : ");
    // scanf("%s", fullName); // Scanf() cannot input multi-word strings with spaces
    // printf("Your fullName is : %s", fullName);

    char str[100];
    fgets(str, 100, stdin);
    puts(str);
    return 0;
}