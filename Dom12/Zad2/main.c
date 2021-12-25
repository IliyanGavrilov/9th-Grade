#include <stdio.h>
#include <stdlib.h>

int duplicates(int* arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                return arr[j];
            }
        }
    }
    return -1;
}

int main()
{
    int arr[]= {10, 11, 13, 15, 16, 16, 12, 28};
    int arr2[]= {10, 11, 13, 15, 16, 17, 12, 28};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("%d\n",duplicates(arr,size));
    printf("%d\n",duplicates(arr2,size));

    return 0;
}
