// Q)Create a structure to store complex numbers (use arrow operator)
#include <stdio.h>
struct complex
{
    int real;
    int img;
};
int main()
{
    struct complex number1 = {5, 8};
    struct complex *ptr = &number1;
    printf("Real part =%d\n", ptr->real);
    printf("Img  part =%d\n", ptr->img);

    return 0;
}