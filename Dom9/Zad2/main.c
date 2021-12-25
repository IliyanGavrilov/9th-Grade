#include <stdio.h>
#include <stdlib.h>

int average(int *a, int size)
{
    float avr=0;
    for(int i=0;i<size;i++)
    {
        avr+=a[i];
    }

    if(size>0)
    {
        return avr/size;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a[5] = {5,5,5,5,0};
    int a1[0];

    printf("%d\n", average(a, 5));
    printf("%d\n", average(a1, 0));

    return 0;
}
