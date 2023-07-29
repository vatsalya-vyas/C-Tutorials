// Q) Will the address output be same ?
#include <stdio.h>
// void printAddress(int n);
void _printAddress(int *n);
int main()
{
    int n = 4;
    // printAddress(n);
    _printAddress(&n);
    printf("Address of n is : %u\n", &n);
    return 0;
}
// Calll by reference
void _printAddress(int *n)
{
    printf("Address of n is : %u\n", n);
}
// // Call by value
// void printAddress(int n)
// {
//     printf("Address of n is : %u\n", &n);
// }