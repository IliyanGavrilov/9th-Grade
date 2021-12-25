#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    int size;
    float t[MAX_SIZE];

    printf("size=");
    scanf("%d", &size);
    for(int i=0;i<size;i++)
    {
        printf("Number %d=", i+1);
        scanf("%f", &t[i]);
    }

    for(int i=0;i<size;i++)
    {
        printf("%f ", t[i]);
    }

    printf("\n");

    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(t[i]>t[j])
            {
                float temp=t[i];
                t[i]=t[j];
                t[j]=temp;
            }
        }
    }

    for(int i=0;i<size;i++)
    {
        printf("%f ", t[i]);
    }

    return 0;
}
