#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,b;
 do{
    printf("a=");
    scanf("%d", &a);
 }while(a<0);
 b = 0;
 while(a!=0)
 {
    a=a/10;
    b=b+1;
 }
 printf("%d", b);
}

