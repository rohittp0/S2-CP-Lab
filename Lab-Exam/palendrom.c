#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Reverses a number and checks if it is a palindrome or not.
 *
 * @param argc
 * @param argv
 * @return 1 if invalid argument 0 in all other cases
 */
int main(int argc, char *argv[])
{
    long number;
    char *input = (char *)malloc(19);

    if (argc > 1) // If more than 1 arguments was passed consider only first.
        strcpy(input, argv[1]);
    else
    {
        puts("Enter a number to check for palindrome");
        scanf("%s", input); // Not reading as long to catch conversion errors
    }

    char *end_ptr = NULL;
    number = strtol(input, &end_ptr, 10);

    if (end_ptr == input)
        return puts("Invalid input, please enter a valid number"), 1;

    if (argc == 2)
        free(input);

    int sign = ((number > 0) - (number < 0)); // Assuming -ve numbers can also be palindrome
    number = sign * number;                   // Get the absolute value of number.

    long reverse = 0;

    for (long number_copy = number; number_copy > 0; number_copy /= 10)
        reverse = (number_copy % 10) + (reverse * 10);

    printf("Number = %ld\t Reverse = %ld \n", sign * number, sign * reverse);
    printf("They are %s palindromes \n", number == reverse ? "" : "not");

    return 0;
}
