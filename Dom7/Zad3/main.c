#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    int *pointer1=&a;
    int *pointer2=&b;
    if(*pointer1>*pointer2)
    {
        return *pointer1;
    }
    else
    {
        return *pointer2;
    }
}

int main()
{
    int a,b;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("%d", max(a,b));
    return 0;
}
