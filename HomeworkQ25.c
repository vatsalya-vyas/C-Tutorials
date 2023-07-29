// Q)Write a program to replace lowercase letters with
// uppercase & vice versa in a string.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void swapCase(char *str)
{
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        else if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the trailing newline character

    swapCase(str);

    printf("Result: %s\n", str);

    return 0;
}
