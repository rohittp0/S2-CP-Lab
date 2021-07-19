#include <stdio.h>

int main()
{
    int number, sum =0;

    printf("Enter the number ");
    scanf("%d", &number);

    number *= (number<0) ? -1 : 1; 

    sum += number % 10;
    while(number/=10) sum += number % 10;

    printf("Sum of digits is %d\n", sum);

    return 0;
}