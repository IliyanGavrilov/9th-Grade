#include <stdio.h>
#include <stdlib.h>

int absolute(int n, int *p)
{
    if(n>0)
    {
        *p=0;
        return n;
    }
    else
    {
        *p=1;
        return -n;
    }
}

int main()
{
    int n, a;
    printf("number=");
    scanf("%d", &n);
    printf("%d\n", absolute(n, &a));
    printf("%d", a);
    return 0;
}
