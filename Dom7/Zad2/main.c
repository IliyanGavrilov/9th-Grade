#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int pointer=*a;
    *a=*b;
    *b=pointer;
}

int main()
{
    int a,b;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    swap(&a, &b);

    printf("a=%d, b=%d", a, b);

    return 0;
}
