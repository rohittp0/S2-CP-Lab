#include <stdio.h>

int factorial(int n, int factorials[])
{
    if(!factorials[n])
        factorials[n] = factorial(n-1, factorials) * n;   

    return factorials[n];
}

int main()
{
   int rows;

   printf("Enter how many rows you want to print : ");
   scanf("%d", &rows);

   if(rows < 1)
    return printf("No rows to print\n"), 1;

   int factorials[rows+3];
   factorials[0] = 1;
   factorials[1] = 1;

   char tabs[rows + 1];

    for(int i=0; i< rows+1; i++) 
    {
        factorials[i+2] = 0;
        tabs[i] = ' ';
    }

   for(int i=0; i< rows; i++)
   {
       printf("%s",tabs);
       tabs[rows - i] = '\0';

        for(int j=0; j<=i; j++)
            printf("%d ",factorial(i,factorials)/factorial(i-j,factorials)/factorial(j,factorials));

        printf("\n");    
   }
}