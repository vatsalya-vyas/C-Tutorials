#include <stdio.h>
#include <string.h>
int main()
{
    // char name[] = "Vatsalya";
    // int length = strlen(name);
    // printf("length is : %d", strlen(name));

    // char oldStr[] = "oldStr";
    // char newStr[] = "newStr";
    // strcpy(newStr, oldStr);
    // puts(newStr);

    // char firstStr[100] = "Hello ";
    // char secString[] = "World";
    // strcat(firstStr, secString);
    // puts(firstStr);

    char firstStr[] = "Banana";
    char secStr[] = "Apple";
    printf("%d", strcmp(firstStr, secStr));
    return 0;
}