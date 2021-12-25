#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7, 8, 9, 12, 13};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0;

    for(i=0;i<size;i++)
    {
        if(arr[i]+1!=arr[i+1])
        {
            for(int j=arr[i]+1;j<arr[i+1];j++)
            {
                printf("%d ", j);
            }
        }

    }

    return 0;
}
