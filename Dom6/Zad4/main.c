#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
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
        for(int j=i+1;j<size;j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d\n", arr[i]);
            }
        }
    }

    return 0;
}
