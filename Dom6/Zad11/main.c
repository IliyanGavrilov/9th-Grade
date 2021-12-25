#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    int size, arr[MAX_SIZE];

    printf("size=");
    scanf("%d", &size);

    for(int i=0;i<size;i++)
    {
        printf("element=");
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<size;i++)
    {
            if(arr[i]%2==0)
            {
                printf("%d ", arr[i]);
            }
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
