#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int a[MAX_SIZE];

int sum(int size, int* p)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=a[i];
    }
    return sum;
}

int main()
{
    int size, *p;
    printf("size=");
    scanf("%d", &size);

    printf("masiv=");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }
    p = &a[0];

    printf("%d", sum(size,p));

    return 0;
}
