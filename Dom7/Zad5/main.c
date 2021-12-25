#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    char *arr[MAX_SIZE];
    int size;
    printf("size=");
    scanf("%d", &size);
    printf("array=");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    char *beginptr=arr, *endptr=arr, a;
    for(int i=0;i<size-1;i++)
    {
        endptr++;
    }
    for(int i=0;i<size/2;i++)
    {
        a=*endptr;
        *endptr=*beginptr;
        *beginptr=a;

        beginptr++;
        endptr--;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d", &arr[i]);
    }
    return 0;
}
