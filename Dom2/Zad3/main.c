#include <stdio.h>
#include <stdlib.h>

float average_odds(int a, int b)
{
    float avr=0;
    int c=0;

    for(int i=a;i<=b;i++)
    {
        if(i%2!=0)
        {
            avr+=i;
            c++;
        }
    }

    if(c>0)
    {
        avr=avr/c;
    }

    return avr;
}

int main()
{
    printf("%f\n", average_odds(-3, -1));    // -2
    printf("%f\n", average_odds(1, 3));      // 2
    printf("%f\n", average_odds(2, 2));      // 0
    printf("%f\n", average_odds(-15, -15));  // -15
    printf("%f\n", average_odds(5, 10));     // 7
    printf("%f\n", average_odds(-7, -3));    // -5
    printf("%f\n", average_odds(-20, 20));   // 0
    printf("%f\n", average_odds(1, 100));    // 50
    return 0;
}
