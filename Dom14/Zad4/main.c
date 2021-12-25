#include <stdio.h>
#include <stdlib.h>

void reverse_copy(int* a, int* b, int n)
{

    printf("%d\n", *a[a-n]);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *a=&arr[2];
    int *b=&arr[6];

    int *a2=&arr[4];
    int *b2=&arr[1];

    reverse_copy(&a,&b,2);
    reverse_copy(&a2,&b2,5);

    return 0;
}
