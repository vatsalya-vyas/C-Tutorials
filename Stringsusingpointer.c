#include <stdio.h>
int main()
{
    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    char cannotChange[] = "Hello World";
    puts(cannotChange);
    // cannotChange="Hello";
    return 0;
}