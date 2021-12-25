#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,x1,x2,d;
    printf("a=");
    scanf("%f", &a);
    printf("b=");
    scanf("%f", &b);
    printf("c=");
    scanf("%f", &c);

    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
            {
                printf("Every x is an answer.");
            }
            else
            {
                printf("N.R.K");
            }
        }
        else
        {
            x1=(-c)/b;
            printf("x=%f", x1);
        }
    }
    else
    {
        d=(b*b)-(4*a*c);
        if(d<0)
            printf("N.R.K.");
        if(d==0)
        {
            x1=-b/(2*a);
            printf("x=%f", x1);
        }
        if(d>0)
        {
            x1=(-b+sqrt(d))/(2*a);
            x2=(-b-sqrt(d))/(2*a);
            printf("x1=%f", x1);
            printf("x2=%f", x2);
        }
    }
}
