#include <stdio.h>
#include <stdlib.h>

int division(int a, int b, int* p)
{
    if(b==0)
    {
        return *p=1;
    }
    *p=0;
    printf("%d\n", *p);
    a=a/b;

    return a;
}

int main()
{
    int a,b,*p=0;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);

    printf("%d", division(a,b,&p));
}
