#include <stdio.h>
#include <stdlib.h>

void reverse(int *a, int size)
{
    for(int i=size-1;i>=0;i--)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[4]={1,2,3,4};

    reverse(a, 4);

    return 0;
}
