#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n,m;
 do{
    printf("a=");
    scanf("%d", &n);
 }while(n<1);
 m=0;
 while(n!=0)
 {
    m=m*10+n%10;
    n=n/10;
 }
 printf("%d", m);
}
