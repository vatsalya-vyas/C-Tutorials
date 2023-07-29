// Q)Write a program to print the highest frequency
// character in a string.

#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 128

char findHighestFrequencyCharacter(const char *str)
{
    int frequency[ASCII_SIZE] = {0};
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        frequency[(int)str[i]]++;
    }

    char highestChar = '\0';
    int highestFreq = 0;

    for (int i = 0; i < ASCII_SIZE; i++)
    {
        if (frequency[i] > highestFreq)
        {
            highestChar = (char)i;
            highestFreq = frequency[i];
        }
    }

    return highestChar;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the trailing newline character

    char highestChar = findHighestFrequencyCharacter(str);

    if (highestChar != '\0')
    {
        printf("Highest frequency character: %c\n", highestChar);
    }
    else
    {
        printf("No character found.\n");
    }

    return 0;
}
