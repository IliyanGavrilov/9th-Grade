#include <stdio.h>
#include <stdlib.h>

void intcopy(int* a, int* b, int n)
{
    int arr3[n];
    for(int j=0;j<n;j++)
    {
        arr3[j]=*(a+j);
    }
    for(int i=0;i<n;i++)
    {
        *(b+i)=arr3[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int *a=&arr[0];
    int *b=&arr[3];

    intcopy(a,b,2);

    int *c=&arr2[0];
    int *d=&arr2[1];

    intcopy(c,d,4);

    for(int i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i=0;i<size2;i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
