// Q)Write a program to enter price of 3 items & print their final cost with gst
#include <stdio.h>
int main()
{
    float price[3];
    printf("Enter 3 Prices : ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("Total Price 1 is : %f\n", price[0] + (0.18 * price[0]));
    printf("Total Price 2 is : %f\n", price[1] + (0.18 * price[1]));
    printf("Total Price 3 is : %f\n", price[2] + (0.18 * price[2]));
    return 0;
}