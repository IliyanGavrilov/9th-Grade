#include <stdio.h>
#include <stdlib.h>

void distance_from_origin(int x, int y)
{
    int distance=0;
    distance=sqrt((x*x)+(y*y));
    printf("distance=%d", distance);
}

struct point
{
    int x;
    int y;
};

int main()
{
    struct point a = {5,12};

    distance_from_origin(a.x,a.y);

    return 0;
}
