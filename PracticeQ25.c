// Q) Write a function that prints Namaste if user is Indian & Bonjour if the user is french
#include <stdio.h>
void bonjour();
void namaste();
int main()
{
    printf("Enter f for French & i for Indian : ");
    char ch;
    scanf("%c", &ch);
    if (ch == 'i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }
    return 0;
}
void namaste()
{
    printf("Namaste :)");
}

void bonjour()
{
    printf("Bonjour :)");
}