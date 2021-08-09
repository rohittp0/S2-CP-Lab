#include <stdio.h>

#define MAX_STR_LEN 20

int stringlen(char str[])
{
    int length = 0;
    while (str[++length] != '\0')
        ;

    return length;
}

char *stringcat(char str1[], char str2[])
{
    for (int i = 0, j = -1; str2[(j>-1)*j] != '\0'; i++)
        if (str1[i] == '\0' || j > -1)
            str1[i] = str2[++j];

    return str1;
}

int stringcmp(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
        if (str1[i] != str2[i++])
            return str1[--i] - str2[i] < 0 ? -1 : 1;

    if (str1[i] == '\0' && str2[i] != '\0')
        return 1;
    if (str1[i] != '\0' && str2[i] == '\0')
        return -1;

    return 0;
}

int main()
{
    char str1[MAX_STR_LEN], str2[MAX_STR_LEN];
    char symbols[] = "<=>";

    printf("Enter two strings.\n");
    scanf("%s %s", str1, str2);

    printf("Length of s1 = %d \t s2 = %d\n", stringlen(str1), stringlen(str2));
    printf("%s %c %s\n", str1, symbols[stringcmp(str1, str2) + 1], str2);
    printf("%s + %s = %s\n", str1, str2, stringcat(str1, str2));

    return 0;
}