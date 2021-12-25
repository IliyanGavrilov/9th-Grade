#include <stdio.h>
#include <stdlib.h>

void chant_tues(int times)
{
    if(times<0)
    {
        printf("Try again.");
        return;
    }
    for(int i=1;i<=times;i++)
    {
        if(i%2!=0)
        {
            printf("\nTUES");
        }
        else
        {
            printf("\nELSYS");
        }
        if(i%3==0)
        {
            printf(" IS THE BEST");
        }
    }
    printf("\n");
}

int main()
{
    chant_tues(6);
    chant_tues(2);

    return 0;
}
