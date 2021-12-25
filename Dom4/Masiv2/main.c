#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float u;
    float masiv[50];
    do{
        printf("n=");
        scanf("%d", &n);
    }while(n>50);
    for(int i=0;i<n;i++)
    {
        scanf("%f", &u);
        u*=100;
        masiv[i]=u;
    }
    for(int j=n-1;j>=0;j--)
    {
        printf("%f \n", masiv[j]);
    }

    return 0;
}
