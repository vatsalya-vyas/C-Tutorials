// Q)Write a program to remove blank spaces in a string.
#include <stdio.h>
#include <string.h>

void removeSpaces(char *str)
{
    int len = strlen(str);
    int count = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ')
        {
            str[count] = str[i];
            count++;
        }
    }

    str[count] = '\0';
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the trailing newline character

    removeSpaces(str);

    printf("Result: %s\n", str);

    return 0;
}
