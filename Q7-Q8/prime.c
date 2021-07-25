#include <stdio.h>
#include <math.h>

int isPrime(int number, int previousPrimes[])
{
    for(int i = 0; previousPrimes[i] < sqrt(number); i++)
        if(number % previousPrimes[i] == 0)
            return 0;

    return 1;        
}

int main()
{
    int limit;

    printf("Enter upto what number you want to get primes : ");
    scanf("%d", &limit);

    if(limit < 3) // Assuming upto n means excluding n
        return printf("Found No Primes is the given range \n"), 1;

    int primes[limit/2 + 1]; 
    int primeIndex = 1;

    primes[0] = 2;

    for(int i=3; i<limit; i++)   
        if(isPrime(i,primes))
            primes[primeIndex++] = i;

    for(int i=0; i<primeIndex; i++)
        printf("%d ",primes[i]);  

    printf("\n");
    return 0;          
}

