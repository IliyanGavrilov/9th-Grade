#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        printf("element=");
        scanf("%d", &arr[i]);
    }
    printf("arr=");
    for(int i=0;i<10;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
