// Q)Write a program to insert an element at the end of
// an array.
#include <stdio.h>
int main()
{
    int a[100], size, i, item;
    printf("Enter size of Array : ");
    scanf("%d", &size);
    printf("Enter elements in Array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Insert element in Array : ");
    scanf("%d", &item);
    size = size + 1;
    a[size - 1] = item;
    printf("After insertion elements at the Ending of Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", a[i]);
    }
    return 0;
}