#include <stdio.h>
int main()
{
    // int age = 19;  // 4 Byte
    // int *ptr = &age;
    // printf("ptr=%u\n", ptr);
    // ptr++;
    // printf("ptr=%u\n", ptr);
    // ptr--;
    // printf("ptr=%u\n", ptr);

    // float price = 100.00; // 4 Byte
    // float *ptr = &price;
    // printf("ptr= %u\n", ptr);
    // ptr++;
    // printf("ptr= %u\n", ptr);
    // ptr--;
    // printf("ptr= %u\n", ptr);

    char star = '*'; // 1 Byte
    char *ptr = &star;
    printf("ptr=%u\n", ptr);
    ptr++;
    printf("ptr=%u\n", ptr);
    ptr--;
    printf("ptr=%u\n", ptr);
    return 0;
}