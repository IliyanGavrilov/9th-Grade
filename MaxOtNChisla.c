#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,n,max,i;
 printf("n=");
 scanf("%d", &n);
 printf("a=");
 scanf("%d", &a);
 max = a;
 i=2;
 do{
    printf("a=");
    scanf("%d", &a);
    if(a>max)
        max = a;
    i++;
 }while(i<=n);
 printf("%d", max);
}

