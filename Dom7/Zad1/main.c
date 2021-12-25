#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Number=");
    scanf("%d", &a);
    int *pointer = &a;
    *pointer=666;
    printf("%d", a);
    return 0;
}
