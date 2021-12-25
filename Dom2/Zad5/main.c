#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }

    return 1;
}

void twin_primes(int a, int b)
{
    for(int i=a;i<=b;i++)
    {
        if(i+2<=b && is_prime(i) && is_prime(i+2))
        {
            printf("(%d, %d) ", i, i+2);
        }
    }
    printf("\n");
}

int main()
{
    twin_primes(1, 10);    // (3, 5), (5, 7)
    twin_primes(17, 101);  // (17, 19), (29, 31), (41, 43), (59, 61), (71, 73)
    twin_primes(19, 31);   // (29, 31)
    return 0;
}
