#include <stdio.h>
#include <stdlib.h>

int are_equal(int *a, int *a1, int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==a1[i])
        {
            sum+=1;
        }
    }
    if(sum==size)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a[4]={1,2,3,4};
    int a1[4]={1,2,3,4};
    int a2[4]={1,2,3,4};
    int a3[4]={2,2,3,4};
    printf("%d\n", are_equal(a,a1, 4));
    printf("%d\n", are_equal(a2,a3, 4));

    return 0;
}
