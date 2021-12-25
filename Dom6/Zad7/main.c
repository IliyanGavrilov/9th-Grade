#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int size,pos,val;

    printf("size=");
    scanf("%d", &size);

    for(int i=0;i<size;i++)
    {
        printf("element=");
        scanf("%d", &arr[i]);
    }
    printf("stoinost koqto da se wmukne=");
    scanf("%d", &val);
    printf("Poziciq na element=");
    scanf("%d", &pos);
    printf("masiv predi obrabotka:");
    for(int i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i=size-1;i>=pos-1;i--)
    {
        arr[i+1] =arr[i];
    }
    arr[pos-1] = val;
    printf("masiv sled obrabotka:");
    for(int i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
