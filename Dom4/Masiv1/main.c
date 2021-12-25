#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int masiv[50];
    do{
        printf("n=");
        scanf("%d", &n);
    }while(n>50);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &masiv[i]);
    }
    for(int j=n-1;j>=0;j--)
    {
        printf("%d \n", masiv[j]);
    }


    return 0;
}
