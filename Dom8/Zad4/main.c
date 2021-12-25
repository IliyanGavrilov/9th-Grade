#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int* find(int* a,int size,int n)
{
    for(int i=0;i<size;i++)
    {
        if(*(a+i)==n)
        {
            return (a+i);
        }
    }

    return NULL;
}
int main()
{
    int a[MAX_SIZE];
    int size,n;
    printf("size=");
    scanf("%d", &size);
    printf("number=");
    scanf("%d", &n);
    printf("masiv=");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }

    int* returnInt = find(a,size,n);

	if(returnInt) {
		printf("%d", *returnInt);
	}
	else {
		printf("NULL");
	}

    return 0;
}
