// Q)Write a program to print the largest number in an
// array
#include <stdio.h>
int returnMax(int array[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}
int main()
{
    int arr[] = {1, 12, 3, 54, 5, 67, 100000};
    int max = returnMax(arr, 7);
    printf("The maximum element in this array is : %d", max);
    return 0;
}