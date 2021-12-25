#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE], arr2[MAX_SIZE];
    int size;
    printf("size=");
    scanf("%d", &size);

    for(int i=0;i<size;i++)
    {
        printf("element=");
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        arr2[i]=arr[i];
    }

    printf("arr1=");
    for(int i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("arr2=");
    for(int i=0;i<size;i++)
    {
        printf("%d ", arr2[i]);
    }


    return 0;
}
