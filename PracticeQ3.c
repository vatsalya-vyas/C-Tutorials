#include <stdio.h>
// Q)Solve int a=1.999999;
int main()
{
    // float a = 1.999999; //Normal way
    // printf("%f", a);
    int a = (int)1.999999; // Explicit Conversion
    printf("%d", a);
    return 0;
}