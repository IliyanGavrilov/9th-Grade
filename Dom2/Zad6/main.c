#include <stdio.h>
#include <stdlib.h>

double leibniz_pi(int iterations)
{
    double pi=0;
    double n=1;
    int sign=1;

    for(int i=0;i<iterations;i++)
    {
        if(sign)
        {
            pi+=4/n;
            sign=0;
        }
        else
        {
            pi-=4/n;
            sign=1;
        }
        n+=2;
    }
    return pi;
}

int main()
{
    printf("%lf\n", leibniz_pi(1));         // 4.000000
    printf("%lf\n", leibniz_pi(10));        // 3.041840
    printf("%lf\n", leibniz_pi(100));       // 3.131593
    printf("%lf\n", leibniz_pi(1000));      // 3.140593
    printf("%lf\n", leibniz_pi(10000));     // 3.141493
    printf("%lf\n", leibniz_pi(100000));    // 3.141583
    printf("%lf\n", leibniz_pi(1000000));   // 3.141592

    return 0;
}
