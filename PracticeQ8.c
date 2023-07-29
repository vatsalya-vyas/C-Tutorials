#include <stdio.h>
// Q) Print 1(true) or 0(false) for following statements :
// a. if it's sunday & it's snowing -> true
// b. if it's monday or it's raining -> true
// c. if a number is greater than 9 & less than 100 ->true
// (2 digit number)
int main()
{
    // int isSunday = 1;
    // int isSnowing = 1;
    // printf("%d\n", isSunday && isSnowing);
    // int isMonday = 0;
    // int isRaining = 1;
    // printf("%d", isMonday || isRaining);
    int x;
    printf("Enter a Number : ");
    scanf("%d", &x);
    printf("%d\n", x > 9 && x < 100);
    return 0;
}