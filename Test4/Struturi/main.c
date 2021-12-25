#include <stdio.h>
#include <stdlib.h>

struct rectangle{
    int a;
    int b;
};

int rectangle_area(struct rectangle a)
{
    int s=a.a*a.b;
    return s;
}

int rectangle_perimeter(struct rectangle a)
{
    int p=(a.a+a.b)*2;
    return p;
}

int main()
{
    struct rectangle a = {2, 3};
    struct rectangle b = {3, 2};
    struct rectangle c = {6, 10};
    struct rectangle d = {10, 6};

    printf("Rectangle A:\n");
    printf("Area = %d\n", rectangle_area(a));
    printf("Perimeter = %d\n", rectangle_perimeter(a));
    printf("Rectangle B:\n");
    printf("Area = %d\n", rectangle_area(b));
    printf("Perimeter = %d\n", rectangle_perimeter(b));
    printf("Rectangle C:\n");
    printf("Area = %d\n", rectangle_area(c));
    printf("Perimeter = %d\n", rectangle_perimeter(c));
    printf("Rectangle D:\n");
    printf("Area = %d\n", rectangle_area(d));
    printf("Perimeter = %d\n", rectangle_perimeter(d));

    return 0;
}
