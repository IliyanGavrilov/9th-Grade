#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c=0,d=0,m,n=0,i,k,g;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);

    m=a;
    g=b;
    for(i=0;g!=0;i++)
    {
        g=g/10;
    }

    for(k=0;k<i;k++)
    {
        m=m*10;
    }
    m+=b;

    printf("%d\n", m);


    while(m!=0)
    {
        if(m%10==9)
        {
            c=c*10;
            m=m/10;
        }
        else
        {
            c=c*10+(m+1)%10;
            m=m/10;
        }

    }
    while(c!=0)
    {
        d=d*10+c%10;
        c=c/10;
    }
    printf("%d", d);

    return 0;
}
