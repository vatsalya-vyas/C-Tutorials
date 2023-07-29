#include <stdio.h>

int main()
{
    // char name[] = {'V', 'A', 'T', 'S', 'A', 'L', 'Y', 'A', '\0'};
    // printf("%c", name[7]);
    // char name[] = "VATSALYA";
    // printf("%s", name);
    // char class[] = {'V', 'A', 'T', 'S', 'A', 'L', 'Y', 'A', ' ', 'V', 'Y', 'A', 'S', '\0'};
    // printf("%s", class);
    // char class[] = "VATSALYA VYAS";
    // printf("%s", class);
    char name[50];
    printf("Enter your name : ");
    scanf("%s", name);
    printf("Your name is : %s", name);
    return 0;
}