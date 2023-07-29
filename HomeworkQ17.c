// Q)Write a program in C to print the elements of an
// array in reverse order.
#include <stdio.h>

void printReverse(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array in reverse order: ");
    printReverse(arr, size);

    return 0;
}
