#include <stdio.h>
#include <stdlib.h>

int is_increasing(int *a, int size)
{
    for(int i=0;i<size-2;i++)
    {
        if(a[i]<a[i+1])
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={1,10,3,4,5};
    printf("%d\n", is_increasing(a,5));
    printf("%d\n", is_increasing(b,5));

    return 0;
}
