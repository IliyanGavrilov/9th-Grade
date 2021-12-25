#include <stdio.h>
#include <stdlib.h>

double square_root2(double S, int times, double x)
{
    for(int i=0;i<times;i++)
    {
        x=0.5*(x+(S/x));
        printf("x=%f\n", x);
    }
    return x;
}

int main()
{
    double S, x;
    int times;
    times=50;
    printf("S=");
    scanf("%lf", &S);
    x=S/2;
    printf("Square Root=%f", square_root2(S,times,x));
    return 0;
}
