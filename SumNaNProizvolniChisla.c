#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n,sum,i,a;
 printf("n=");
 scanf("%d", &n);
 while(n<1)
 {
    printf("n=");
    scanf("%d", &n);
 }
 i = 0;
 sum = 0;
 while(i<n)
 {
    printf("a=");
    scanf("%d", &a);
    sum=sum+a;
    i++;
 }
 printf("%d", sum);
}
