#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    int size, arr[MAX_SIZE], pos,zeros=0;

    printf("size=");
    scanf("%d", &size);

    for(int i=0;i<size;i++)
    {
        printf("element=");
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            zeros++;
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }
    for(int i=0;i<zeros;i++)
    {
        printf("0 ");
    }

    return 0;
}
