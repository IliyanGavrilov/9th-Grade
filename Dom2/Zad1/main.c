#include <stdio.h>
#include <stdlib.h>

void greet(int times)
{
    if(times<0)
    {
        printf("Hello, World!\n");
    }
    else
    {
        for(int i=0;i<times;i++)
        {
            printf("Hello, World!\n");
        }
    }
}

int main()
{
    greet(0);
    greet(-10);
    greet(5);


    return 0;
}
