#include <stdio.h>
// While loop !
int main()
{

    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    // for (int i = 0; i <= n; i++)
    // {
    //     printf("%d\n", i);
    // }

    // int i = 0;
    // while (i <= n)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }

    int i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}
