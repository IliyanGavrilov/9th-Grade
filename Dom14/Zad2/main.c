#include <stdio.h>
#include <stdlib.h>

int is_digits_subset(char* arr, char* arr2, char* n, int size, int size2)
{
    for(int i=0;i<size;i++)
    {
        int found=0;
        for(int j=0;j<size2;j++)
        {
            if(arr[i]>=48 && arr[i]<=57)
            {
                if(arr[i]==arr2[j])
                {
                    found=1;
                    break;
                }
            }
            else
            {
                found=1;
            }
        }
        if(!found)
        {
            *n=arr[i];
            return 0;
        }
    }
    return 1;
}

int main()
{
    char arr[] = {'1', 'a', '2', 'b'};
    char arr2[] = {'c', 'd', '1'};
    char n;

    int size=sizeof(arr)/sizeof(arr[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);

    printf("%d\n", is_digits_subset(arr,arr2,&n,size,size2));
    printf("%c", n);

    return 0;
}
