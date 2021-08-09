#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 20

int main()
{
    int n;

    printf("How many names do you have?\n");
    scanf("%d", &n);

    char names[n][MAX_STR_LEN];

    printf("Enter names\n");
    for (int i = 0; i < n; scanf("%s", names[i++]));

    char temp[30];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("\nSorted: \n");
    for (int i = 0; i < n; printf("%s\n", names[i++]));
}