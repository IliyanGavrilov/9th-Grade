#include <stdio.h>
#include <stdlib.h>
int pop(int *a, int a_size)
{
    for(int i=a_size - 1;i>=0;i--)
    {
        if(a[i]>0)
        {
            int temp = a[i];
            a[i]=-1;
            return temp;
        }
    }

    return a[0];
}
int main()
{
    int a[] = {100, 200, 300, 400, 500};
    int a_size = sizeof(a)/sizeof(a[0]);
    printf("%d\n", pop(a, a_size)); // 500
    printf("%d\n", pop(a, a_size)); // 400
    printf("%d\n", pop(a, a_size)); // 300
    printf("%d\n", pop(a, a_size)); // 200
    printf("%d\n", pop(a, a_size)); // 100
    printf("%d\n", pop(a, a_size)); // -1
    printf("%d\n", pop(a, a_size)); // -1
    printf("%d\n", pop(a, a_size)); // -1

    int b[] = {-100, 200, -300, 400, -500};
    int b_size = sizeof(b)/sizeof(b[0]);

    printf("%d\n", pop(b, b_size)); // 400
    printf("%d\n", pop(b, b_size)); // 200
    printf("%d\n", pop(b, b_size)); // -100
    printf("%d\n", b[4]); // -500
    printf("%d\n", b[2]); // -300

    return 0;
}
