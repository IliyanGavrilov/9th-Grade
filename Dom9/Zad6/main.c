#include <stdio.h>
#include <stdlib.h>

void shift_right(int *a, int *b, int *c)
{
    int temp1,temp2;
    temp1=*b;
    temp2=*a;
    *a=*c;
    *b=temp2;
    *c=temp1;
    printf("a=%d,b=%d,c=%d", *a,*b,*c);


}

int main()
{
    int a1=1,b1=2,c1=3;
    int *a=a1,*b=b1,*c=c1;
    shift_right(&a,&b,&c);
    return 0;
}
