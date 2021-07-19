#include <stdio.h>

int main()
{
    printf("         Menu\n");
    printf("Addition.............. 1\n");
    printf("Subtraction........... 2\n");
    printf("Multiplication........ 3\n");
    printf("Division ............. 4\n");

    int choice, a,b,result;

    scanf("%d", &choice);

    printf("Enter two numbers to operate on\n");
    scanf("%d %d",&a,&b);

    if(b == 0 && choice == 4)
        return printf("Division by zero");

    switch (choice)
    {
        case 1:
            result = a+b;
            break;
        case 2:
            result = a-b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            result = a / b;
            break;        

        default:
            printf("Invalid choice aborting");
    }

    printf("\n%d", result);

    return 0;
}