#include <stdio.h>
#include <stdlib.h>

double square_root2(double S, double x)
{
    double x1, diff=1;
    while(diff>=1e-6)
    {
        x=0.5*(x+(S/x));
        x1=0.5*(x+(S/x));
        diff=x-x1;
    }
    return x;
}

int main()
{
    double S, x;
    printf("S=");
    scanf("%lf", &S);
    x=S/2;
    printf("Square Root=%f", square_root2(S,x));
    return 0;
}
