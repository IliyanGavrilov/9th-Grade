#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, flag=1;
    int masiv[100];
    do{
        printf("n=");
        scanf("%d", &n);
    }while(n>50);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &masiv[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(masiv[i] != masiv[j])
            {
                printf("Not symmetrical!");
                flag=0;
                break;
            }
        }
    }
    if(flag == 1)
    {
        printf("Symmetrical!");
    }

    return 0;
}
