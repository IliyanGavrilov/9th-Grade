#include <stdio.h>
#include <stdlib.h>

void floor_and_ceiling(int* arr, int size, int number)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==number)
        {
            printf("Floor:%d, Ceiling:%d\n", arr[i-1],arr[i+1]);
            return;
        }
        else
        {
            if(arr[i]>number)
            {
                printf("Floor:%d, Ceiling:%d\n", arr[i-1],arr[i]);
                return;
            }
        }
    }
    return "NO\n";
}

int main()
{
    int arr[] = {1,4,7,8,9,9,10};
    int size=sizeof(arr)/sizeof(arr[0])-1;
    int number=5;
    floor_and_ceiling(arr,size,number);

    return 0;
}
