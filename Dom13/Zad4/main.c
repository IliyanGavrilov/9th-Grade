#include <stdio.h>
#include <stdlib.h>

void move_to(int a_x,int a_y, int x, int y)
{
    if(a_x!=x && a_y!=y)
    {
        a_x=x;
        a_y=y;
    }
    printf("Center=%d,%d", a_x,a_y);
}

struct circle
{
    int x;
    int y;
};

struct point
{
    int x;
    int y;
};

int main()
{
    struct circle a={1,2};
    struct point b={0,0};

    move_to(a.x,a.y,b.x,b.y);

    return 0;
}
