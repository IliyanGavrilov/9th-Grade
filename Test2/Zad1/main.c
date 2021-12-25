#include <stdio.h>
#include <stdlib.h>

int powers_with_sign(float* a, int size)
{
    int counter=0;
    for(int i=1;i<=size;i++)
    {

        if(i%2==0)
        {
            a[i-1]=a[i-1]*a[i-1];
        }
        else
        {
            a[i-1]=a[i-1]*a[i-1]*a[i-1];
        }
        if(a[i-1]<0)
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    float a[] = {1, 2, -3, -4, -5};
    int size=sizeof(a)/sizeof(a[0]);
    printf("%d", powers_with_sign(a, size));

    return 0;
}
