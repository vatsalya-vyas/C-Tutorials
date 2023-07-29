// Q)Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    printf("Enter numbers (5): ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    ptr = (int *)realloc(ptr, 8 * sizeof(int));

    printf("Enter numbers (8): ");
    for (int i = 5; i < 8; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // Print
    for (int i = 0; i < 8; i++)
    {
        printf("number %d is %d\n", i, ptr[i]);
    }

    free(ptr);
    return 0;
}
