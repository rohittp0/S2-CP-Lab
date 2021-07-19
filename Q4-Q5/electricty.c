#include <stdio.h>

int main()
{
    int cNo , usage;
    
    printf("Enter the consumer number and energy usage : ");
    scanf("%d %d", &cNo,&usage);


    int charge = 0;

    if(usage > 500){
        charge += (usage - 500)*8;
        usage = 500;
    }    

    if(usage > 200){
        charge += (usage - 200)*5;
        usage = 200;
    }

    if(usage > 100){
        charge += (usage - 100)*5;
        usage = 100;
    }

    charge += usage*3.5;
    charge = charge > 40 ? charge : 40 ;
    
    printf("\nElectricity bill for consumer %d :\n",cNo);

    printf("-------------------\n");
    printf("| Charge  |  Tax  |\n");
    printf("-------------------\n");
    printf("|  %4d   | %4d  |\n",charge,charge*12/100);
    printf("-------------------\n");
   
    return 0;
}