#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int a=1;
    for(i=0;i<7;i++)
    {
        printf("%d\n",a);
        a=(a*10)+1;
    }
    return 0;
}
