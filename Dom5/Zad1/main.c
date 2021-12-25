#include <stdio.h>
#include <stdlib.h>

int n=0;

int double_up()
{
    if(n==0)
    {
        n=2;
    }
    else
    {
        n*=2;
    }
    return n;
}

int main()
{
    printf("%d\n", double_up());  // 2
    printf("%d\n", double_up());  // 4
    printf("%d\n", double_up());  // 8

    for(int i = 0; i < 9; i++)
    {
        double_up(); // no output expected
    }

    printf("%d\n", double_up());  // 8192
    return 0;
}
