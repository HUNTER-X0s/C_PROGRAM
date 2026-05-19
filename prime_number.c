#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int isprime = 1; // let us assume that the number is prime initially.
    if (n <= 1)
    {
        isprime = 0; // numbers less than or equal to 1 are not prime.
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                isprime = 0; // if n is divisible by any number between 2 and n/2, then it is not prime.
                break;
            }
        }
    }

    if (isprime == 1)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}