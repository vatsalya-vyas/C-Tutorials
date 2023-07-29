// Q)Write a function to calculate Percentage of a student from
// Marks in Science,Math & Sanskrit
#include <stdio.h>
int calcPercentage(int science, int math, int sanskrit);
int main()
{
    int sc = 99;
    int math = 99;
    int sanskrit = 99;
    printf("percentage is : %d", calcPercentage(sc, math, sanskrit));
    return 0;
}
int calcPercentage(int science, int math, int sanskrit)
{
    return ((science + math + sanskrit) / 3);
}