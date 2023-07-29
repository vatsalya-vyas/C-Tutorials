// Q)Write a program in C to print all the letters in english
// alphabet using a pointer.
#include <stdio.h>

void printAlphabet()
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char *ptr = alphabet;

    while (*ptr != '\0')
    {
        printf("%c ", *ptr);
        ptr++;
    }

    printf("\n");
}

int main()
{
    printf("Alphabet: ");
    printAlphabet();

    return 0;
}
