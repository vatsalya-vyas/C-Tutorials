#include <stdio.h>
void calculatePrice(float value);
int main()
{
    float value;
    printf("Enter value : ");
    scanf("%f", &value);

    calculatePrice(value);
    printf("\nValue is : %f ", value);

    return 0;
}
void calculatePrice(float value)
{
    value = value + (0.18 * value);
    printf("Final price is : %f", value);
}