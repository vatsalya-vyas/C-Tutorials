// Q)Replace the data in file of Q(a) with the number of
// vowels in the string.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countVowels(const char *str)
{
    int vowels = 0;
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vowels++;
    }

    return vowels;
}

int main()
{
    // Step 1: Read the content of file Q(a)
    FILE *file = fopen("Q(a).txt", "r");
    if (file == NULL)
    {
        printf("Unable to open the file Q(a).\n");
        return 1;
    }

    char content[1000];
    if (fgets(content, sizeof(content), file) == NULL)
    {
        printf("Unable to read the file Q(a).\n");
        fclose(file);
        return 1;
    }
    fclose(file);

    // Step 2: Calculate the number of vowels in the string
    int vowelCount = countVowels(content);

    // Step 3: Replace the existing data in the file with the number of vowels
    file = fopen("Q(a).txt", "w");
    if (file == NULL)
    {
        printf("Unable to open the file Q(a).\n");
        return 1;
    }

    fprintf(file, "%d", vowelCount);
    fclose(file);

    printf("Data replaced in file Q(a) successfully.\n");

    return 0;
}
