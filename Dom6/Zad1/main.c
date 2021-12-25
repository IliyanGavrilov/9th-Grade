#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int sum=0, size;

    printf("size=");
    scanf("%d", &size);

    for(int i=0;i<size;i++)
    {
        printf("stoinost=");
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    printf("Sum=%d", sum);

    return 0;
}
