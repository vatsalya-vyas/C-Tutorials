// Q)In an array of numbers, find how many times does
// a number 'x' occurs.
#include <stdio.h>

int countOccurrences(int arr[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int array[] = {1, 2, 3, 2, 4, 2, 5, 2};
    int size = sizeof(array) / sizeof(array[0]);
    int x = 2;
    int occurrences = countOccurrences(array, size, x);
    printf("Number of occurrences: %d\n", occurrences);
    return 0;
}
