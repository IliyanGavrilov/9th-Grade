#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    int size, arr[MAX_SIZE], pos;

    printf("size=");
    scanf("%d", &size);

    for(int i=0;i<size;i++)
    {
        printf("element=");
        scanf("%d", &arr[i]);
    }

    printf("position=");
    scanf("%d", &pos);

    int arr2[size];
    for(int i=pos;i<size;i++)
    {
        arr2[i-pos]=arr[i];
    }

    for(int i=0;i<pos;i++)
    {
        arr2[size-pos+i]=arr[i];
    }

    printf("arr2=");
    for(int i=0;i<size;i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
