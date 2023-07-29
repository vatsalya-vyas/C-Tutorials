// Call by value
#include <stdio.h>
void Square(int n);
void _square(int *n);
int main()
{
    int number = 4;
    Square(number);
    printf("number = %d\n", number);
    _square(&number);
    printf("number = %d\n", number);
    return 0;
}
void Square(int n)
{
    n = n * n;
    printf("Square = %d\n", n);
}
void _square(int *n)
{
    *n = (*n) * (*n);
    printf("Square = %d\n", *n);
}