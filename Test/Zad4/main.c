#include <stdio.h>
#include <stdlib.h>

int is_prime(int number)
{
    if(number==1)
    {
        return 0;
    }
    for(int i=2;i<=number/2;i++)
    {
        if(number%i==0)
        {
            return 0;
        }
    }
    return 1;
}

float average_primes(int from, int to)
{
    int count=0;
    float sum=0, avr=-1;
    for(int i=from;i<=to;i++)
    {
        if(is_prime(i))
        {
            sum+=i;
            count++;
        }
    }
    if(count)
    {
        avr=sum/count;
    }
    return avr;
}

int main()
{

    printf("%f\n", average_primes(1, 10)); // 4.25
    return 0;
}
