#include <stdio.h>

int main()
{
    int age = 19;
    int *ptr = &age;
    // Pointer Address
    // printf("%p\n", &age);
    // printf("%u\n", &age);
    // printf("%u\n", ptr);
    // Value
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));
    return 0;
}