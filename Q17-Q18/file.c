#include <stdio.h>
#include <stdlib.h>

#define NUM_SENTENC 10

int main()
{
    FILE *fptr = fopen("/tmp/text.txt", "w");

    if (fptr == NULL)
        return printf("Error opening file to write"), 1;

    printf("Enter %d sentences to be written to the file\n", NUM_SENTENC);

    char txt = '\0';
    for (int i = 0; i < NUM_SENTENC; fprintf(fptr, "%c", txt), i += txt == '.')
        scanf("%c", &txt);

    fclose(fptr);

    char c;
    int words = 0, charectors = 0;

    fptr = fopen("/tmp/text.txt", "r");

    if (fptr == NULL)
        return printf("Error opening file to read"), 1;

    printf("\n\nThe file contains : \n\n");

    while ((c = getc(fptr)) != EOF)
    {
        if (c == ' ')
            words++;
        charectors++;

        printf("%c", c);
    }

    fclose(fptr);

    printf("\n\n Number of words = %d \n", words);
    printf("\n Number of charectors = %d (including space)\n", charectors);

    return 0;
}