// Q) Write 2 functions-one to print "Hello" & second to print "good bye"
#include <stdio.h>
// Declaration/Prototype
void Hello();
void Goodbye();
int main()
{
    // Function call
    Hello();
    Goodbye();
    Hello();
    Goodbye();
    return 0;
}
// Function definition
void Hello()
{
    printf("Hello !\n");
}

void Goodbye()
{
    printf("Goodbye :)\n");
}
