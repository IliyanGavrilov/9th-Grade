#include <stdio.h>
#include <stdlib.h>

int average(int *a, int size, int *p)
{
    float avr=0;
    for(int i=0;i<size;i++)
    {
        avr+=a[i];
    }

    if(size>0)
    {
        *p = 0;
        return avr/size;
    }
    else
    {
        *p=1;
        return 0;
    }
}

int main()
{
    int b;
    int a[5] = {5,5,5,5,0};
    int a1[0];

    printf("%d\n", average(a, 5, &b));
    printf("%d\n", b);
    printf("%d\n", average(a1, 0, &b));
    printf("%d\n", b);

    return 0;
}
