#include <stdio.h>
// Pointer to Pointer
int main()
{
    int age = 19;
    int *ptr = &age;
    int **pptr = &ptr;
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", **pptr);
    return 0;
}