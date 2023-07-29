// Q)Make a structure to store Bank account information of a customer of ABC Bank.
// Also, make an alis for it
#include <stdio.h>

typedef struct BankAccount
{
    int accountNo;
    char name[100];
} acc;

int main()
{
    acc acc1 = {123, "Vatsalya"};

    printf("Acc no =%d\n", acc1.accountNo);
    printf("Name =%s\n", acc1.name);
    return 0;
}