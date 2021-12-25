#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sum=0;
    for(int i=0;i<10;i++)
    {
        printf("a=");
        scanf("%d", &a);
        if(a<0)
        {
            continue;
        }
        else
        {
            sum+=a;
        }
    }
    printf("sum=%d", sum);
    return 0;
}
