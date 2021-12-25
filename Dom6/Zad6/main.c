#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int size, min,second_min;
    printf("size=");
    scanf("%d", &size);

    for(int i=0;i<size;i++)
    {
        printf("element=");
        scanf("\n%d", &arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i] <min)
        {
            min=arr[i];
        }
        else if(arr[i]>=min && arr[i]<second_min)
        {
            second_min=arr[i];
        }
    }
    printf("Second minimal=%d", second_min);

    return 0;
}
