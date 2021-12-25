#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,n,i;
 do{
    printf("n=");
    scanf("%d", &n);
 }while(n<1);
 i=0;
 a=1;
 while(a<n)
 {
    if(n%a==0)
        printf("%d", a);
        i++;
    a++;

 }
 printf("%d", i);
}
