#include <stdio.h>
#include <stdlib.h>

int at(int *a, int a_size, int pos)
{
    int temp=0;
    if(pos<=-(a_size))
    {
        for(int i=a_size;i>=-a_size*10;i--)
        {
            if(i!=0 && i!=4 && i%a_size==0)
            {
                temp+=a_size;
            }
            if(i==pos)
            {
                return a[a_size+(i+temp)];
            }
        }
    }

    else if(pos>-a_size && pos<0)
    {
        for(int i=a_size;i>=0;i--)
        {
            if(i==a_size+pos)
            {
                return a[i];
            }
        }
    }

    else if(pos>=0 && pos<a_size)
    {
        for(int i=0;i<a_size;i++)
        {
            if(i==pos)
            {
                return a[i];
            }
        }
    }

    else
    {
        for(int i=0;i<a_size*10;i++)
        {
            if(i>0 && i%a_size==0)
            {
                temp+=a_size;
            }
            if(i==pos)
            {
                return a[i-temp];
            }
        }
    }
}

int main()
{
    int a[] = {10, 20, 30, 40};
    int a_size = sizeof(a)/sizeof(a[0]);
    printf("%d\n", at(a, a_size, 0)); // 10
    printf("%d\n", at(a, a_size, 1)); // 20
    printf("%d\n", at(a, a_size, -1)); // 40
    printf("%d\n", at(a, a_size, -2)); // 30
    printf("%d\n", at(a, a_size, 4)); // 10
    printf("%d\n", at(a, a_size, 5)); // 20
    printf("%d\n", at(a, a_size, -5)); // 40
    printf("%d\n", at(a, a_size, -6)); // 30

    return 0;
}
