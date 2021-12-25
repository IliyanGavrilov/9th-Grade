#include <stdio.h>
#include <stdlib.h>

void area(int a, int b)
{
    int area=0;
    area=a*b;
    printf("Area=%d", area);
}

struct triangle
{
    int a;
    int b;
};

int main()
{
    struct triangle t = {3,4};
    area(t.a,t.b);

    return 0;
}
