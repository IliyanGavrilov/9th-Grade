#include <stdio.h>
#include <stdlib.h>

int pyramid(int times)
{
    for(int i=0;i<times;i++)
    {
        for(int j=0;j<=times;j++)
        {
            if(j>i)
            {
                continue;
            }
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int times;
    printf("Times=");
    scanf("%d", &times);

    printf(pyramid(times));

    return 0;
}
