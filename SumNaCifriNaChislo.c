#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,b,sum;
 do{
    printf("a=");
    scanf("%d", &a);
 }while(a<1);
 sum=0;
 while(a!=0)
 {
    sum=sum+a%10;
    a=a/10;
 }
 printf("%d", sum);
}
