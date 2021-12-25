#include <stdio.h>
#include <stdlib.h>

int func(int *a, int size)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]%15==0)
        {
            a[i]*=a[i];
            printf("element - %d: %d\n", i+1, a[i]);
        }
        else if(a[i]%3==0 || a[i]%5==0)
        {
            a[i]=a[i]*a[i]*a[i];
            printf("element - %d: %d\n", i+1, a[i]);
        }
        else
        {
            printf("element - %d: %d\n", i+1, a[i]);
        }
    }
}

int main()
{
    int a[5]={3,5,15,4,20};
    func(a, 5);
    return 0;
}
