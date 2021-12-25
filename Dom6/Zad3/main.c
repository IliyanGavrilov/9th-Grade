#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    int size;
    float t[MAX_SIZE];
    float t1[MAX_SIZE];
    float tt1[MAX_SIZE*2];

    printf("size=");
    scanf("%d", &size);
    for(int i=0;i<size;i++)
    {
        printf("1wi masiw Number %d=", i+1);
        scanf("%f", &t[i]);
    }
    for(int i=0;i<size;i++)
    {
        printf("2ri masiw Number %d=", i+1);
        scanf("%f", &t1[i]);
    }

    for(int i=0;i<size;i++)
    {
        tt1[i]=t[i];
    }
    for(int i=0;i<size;i++)
    {
        tt1[size+i]=t1[i];
    }


    for(int i=0;i<(size*2)-1;i++)
    {
        for(int j=i+1;j<size*2;j++)
        {
            if(tt1[i]<tt1[j])
            {
                float temp=tt1[i];
                tt1[i]=tt1[j];
                tt1[j]=temp;
            }
        }
    }

    for(int i=0;i<size*2;i++)
    {
        printf("%f ", tt1[i]);
    }

    return 0;
}
