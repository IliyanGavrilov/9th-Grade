#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n,i;
 do{
    printf("n=");
    scanf("%d", &n);
 }while(n<=1);
 i = 2;
 while(n%i!=0)
 {
    i++;
 }
 if(n%i==0)
    if(n==i)
        printf("Prosto e.");
    else printf("Ne e prosto.");

}
