// Q)Allocate memory for 500 integers using calloc &
// then store first 500 natural numbers in that space.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers = (int *)calloc(500, sizeof(int));

    if (numbers == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    // Storing the first 500 natural numbers
    for (int i = 0; i < 500; i++)
    {
        numbers[i] = i + 1;
    }

    // Printing the stored numbers
    for (int i = 0; i < 500; i++)
    {
        printf("%d \n", numbers[i]);
    }

    // Don't forget to free the allocated memory
    free(numbers);

    return 0;
}
