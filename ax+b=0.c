#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,x;

    printf("a=");
    scanf("%f", &a);
    printf("b=");
    scanf("%f", &b);

    if(a==0)
        if(b==0)
        {
            printf("Every x is an answer.");
        }
        else
        {
            printf("N.R.K.");
        }
    else
    {
        x=-b/a;
        printf("%f", x);
    }

}
