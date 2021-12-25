#include <stdio.h>
#include <stdlib.h>

float sum(float a, float b, float* p)
{
    p=&a;
    *p=a+b;
    return *p;
}

int main()
{
    float a, b, *p;
    printf("a=");
    scanf("%f", &a);
    printf("b=");
    scanf("%f", &b);

    printf("%f", sum(a,b,p));
    return 0;
}
