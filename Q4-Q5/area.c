#include <stdio.h>
#include <math.h>

int showMenu()
{
    int choice = -1;

    printf("What shape do you want to find area of?\n");
    printf("\t 0) Exit\n");
    printf("\t 1) Rectange\n");
    printf("\t 2) Triangle\n");

    scanf("%d",&choice);

    if(choice > -1 && choice < 3)
        return choice;

    printf("That seems to be an invalid option, select from given ones only.\n\n");
    return showMenu();    
}

int main()
{
    int choice;
    while (choice= showMenu()) 
    {
        int l,b,c;

        printf("\nEnter the dimensions of the shape.\n");

        scanf("%d",&l);
        scanf("%d",&b);
        if(choice == 2) scanf("%d",&c);

        int s = (l+b+c)/2;

        printf("\nArea is %d \n\n" ,choice == 1 ? l*b : (int)sqrt(s*(s-l)*(s-b)*(s-c)));
    }
    
    printf("\n Thank you for using this program !!");
   
    return 0;
}