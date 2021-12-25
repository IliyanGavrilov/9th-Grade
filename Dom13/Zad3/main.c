#include <stdio.h>
#include <stdlib.h>

void grow_circle(int radius, float n)
{
    int r=1;
    n=n/100;
    r=radius*n+radius;
    printf("radius=%d\n", r);
}

struct circle
{
    int radius;
};

int main()
{
    struct circle a = {6};

    grow_circle(a.radius,0);
    grow_circle(a.radius,25);
    grow_circle(a.radius,50);
    grow_circle(a.radius,100);

    return 0;
}
