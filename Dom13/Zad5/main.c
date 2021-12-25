#include <stdio.h>
#include <stdlib.h>

void to_monochrome(int r, int g, int b)
{
    int monochrome=(r + g + b) / 3;
    printf("%d\n", monochrome);
}

struct color
{
    int r;
    int g;
    int b;
};

int main()
{
    struct color a={255,255,255};
    struct color b={200,255,255};
    struct color c={255,200,255};
    struct color d={255,255,200};
    struct color e={0,255,255};
    struct color f={255,0,255};
    struct color g={255,255,0};
    struct color h={69,42,0};
    struct color i={69,4,20};

    to_monochrome(a.r,a.g,a.b);
    to_monochrome(b.r,b.g,b.b);
    to_monochrome(c.r,c.g,c.b);
    to_monochrome(d.r,d.g,d.b);
    to_monochrome(e.r,e.g,e.b);
    to_monochrome(f.r,f.g,f.b);
    to_monochrome(g.r,g.g,g.b);
    to_monochrome(h.r,h.g,h.b);
    to_monochrome(i.r,i.g,i.b);

    return 0;
}
