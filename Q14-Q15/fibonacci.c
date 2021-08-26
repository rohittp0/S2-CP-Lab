#include <stdio.h>

long fib(int n, long *previous)
{
    if (*(previous + n) == -1)
        *(previous + n) = fib(n - 1, previous) + fib(n - 2, previous);

    return *(previous + n);
}

int main()
{
    int x;

    printf("Enter number of terms to print\n");
    scanf("%d", &x);

    if (x < 1)
        return printf("No terms to print\n"), 1;

    long previous[++x];

    for (int i = 0; i < x; i++)
        previous[i] = i > 2 ? -1 : 1;

    printf("Fibonacci numbers are : \n");

    for (int i = 1; i < x; i++)
        if (fib(i, previous) > 0)
            printf("%3ld ", fib(i, previous));
        else 
            return printf("\nMaximum storable number exceeded at term no %d\n",i), 2;

    return 0;
}