#include <stdio.h>

int main()
{
   int rows;

   printf("Enter how many rows you want to print : ");
   scanf("%d", &rows);

   if(rows < 1)
    return printf("No rows to print\n"), 1;

    char tabs[rows];
    for(int i=0; i< rows; tabs[i++] = ' ');

    for (int line = 1; line <= rows; line++)
    {
        printf("%s",tabs);
        tabs[rows - line] = '\0';

        for (int i = 1, n= 1; i <= line; n = (n * (line - i)) / i++)
            printf("%d ", n);

        printf("\n");
    }

    return 0;
}