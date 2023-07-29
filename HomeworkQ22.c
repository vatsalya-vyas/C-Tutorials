// Q)Write a program to convert all lowercase vowels to
// uppercase in a string.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void convertToLowercaseVowels(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            switch (str[i])
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                str[i] = toupper(str[i]);
                break;
            }
        }
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the trailing newline character

    convertToLowercaseVowels(str);

    printf("Result: %s\n", str);
    return 0;
}
