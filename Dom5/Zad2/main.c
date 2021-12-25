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

int double_up_static()
{
    static int i=0;
    if(i == 0)
    {
        i = 2;
    }
    else
    {
        i*=2;
    }
    return i;
}

int main()
{
    printf("%d\n", double_up() == double_up_static());  // 1
    printf("%d\n", double_up() == double_up_static());  // 1
    printf("%d\n", double_up() == double_up_static());  // 1

    for(int i = 0; i < 9; i++)
    {
        double_up(); // no output expected
        double_up_static(); // no output expected aswell
    }

    printf("%d\n", double_up() == double_up_static());  // 1

    return 0;
}
