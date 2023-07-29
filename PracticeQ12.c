#include <stdio.h>
// Q)Write a program to find if a character entered by user is upper case or not
int main()
{
    char ch;
    printf("Enter Character : ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Character is Uppercase\n");
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Character is Lowercase\n");
    }

    else
    {
        printf("Not English Letter");
    }

    return 0;
}