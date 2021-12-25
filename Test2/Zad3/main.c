#include <stdio.h>
#include <stdlib.h>

int max_element(int* a, int size)
{
    int max=a[0];
    for(int i=1;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}

int min_element(int* a, int size, int bigger_than)
{

    int min_index=0;
    int min = a[0];
    for(int i=1;i<size;i++)
    {
        if(a[i]<min && a[i]>=bigger_than)
        {
            printf("%d,%d,%d\n", min, a[i], bigger_than);
            min=a[i];
            min_index=i;
        }
    }
    return min_index;
}

void balance(int* a, int* b, int size_a, int size_b)
{
    int temp;
    for(int i=0;i<size_a-1;i++)
    {
        for(int j=0;j<size_a-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("masiv:a=");
    for(int i=0;i<size_a;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nmasiv:b=");
    for(int i=0;i<size_b;i++)
    {
        printf("%d ", b[i]);
    }

    for(int i=0;i<size_a;i++)
    {
        if(i==size_b)
        {
            break;
        }
        int min_b_index=min_element(b,size_b,a[i]);
        if(b[min_b_index]<a[i])
        {
            printf("1.Masivite ne mogat da se podredqt po uslovieto.");
            break;
        }
        else
        {
            int temp;
            temp=b[i];
            b[i]=b[min_b_index];
            b[min_b_index]=temp;
        }
    }
}

int main()
{
    int a[] = {6,5,4,3,2,1};
    int b[] = {1,3,4,5,7,6,2};

    int size_a=sizeof(a)/sizeof(a[0]);
    int size_b=sizeof(b)/sizeof(b[0]);

    if(max_element(a,size_a)>max_element(b,size_b))
    {
        printf("2.Masivite ne mogat da se podredqt po uslovieto.");
    }
    else
    {
        balance(a,b,size_a,size_b);
    }
    printf("masiv:a=");
    for(int i=0;i<size_a;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nmasiv:b=");
    for(int i=0;i<size_b;i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
