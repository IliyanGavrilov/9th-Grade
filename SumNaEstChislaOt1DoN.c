#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n,sum,i;
 i=0;
 sum=0;
 do{
    printf("n=");
    scanf("%d", &n);
 }while(n<1);
 while(i<n)
 {
    i++;
    sum=sum+i;
 }
 printf("%d", sum);
}
