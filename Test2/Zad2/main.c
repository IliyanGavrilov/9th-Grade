#include <stdio.h>
#include <stdlib.h>

int is_subset(int* a, int* b, int* pos, int size_a, int size_b)
{
    for(int i=0;i<size_a;i++)
    {
        int contains = 0;
        for(int j=0;j<size_b;j++)
        {
            if(a[i]==b[j])
            {
                contains=1;
                break;
            }
        }
        if(!contains)
        {
            *pos=i;
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a[] = {1,2,3,5,6,};
    int b[] = {1,2,3,5,6};
    int size_a=sizeof(a)/sizeof(a[0]);
    int size_b=sizeof(b)/sizeof(b[0]);
    int pos=-1;

    printf("return=%d\n", is_subset(a,b, &pos, size_a, size_b));
    if(pos!=-1)
    {
        printf("pos=%d\n", pos);
    }

    return 0;
}
