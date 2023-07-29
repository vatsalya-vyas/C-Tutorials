#include <stdio.h>
int main()
{
    int boyAge = 10;
    int _girlAge = 11;
    int *ptr = &boyAge;
    int *_ptr = &_girlAge;

    printf("%u, %u Difference =%u\n", ptr, _ptr, ptr - _ptr);
    _ptr = &boyAge;
    printf("Comparison =%u\n", ptr == _ptr);
    return 0;
}