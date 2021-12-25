#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,b,c;
 printf("a=");
 scanf("%d", a);
 printf("b=");
 scanf("%d", b);
 printf("c=");
 scanf("%d", c);
 if(a>b)
    if(a>c) printf("%d", a);
    else printf("%d", c);
 else
    if(b>c) printf("%d",b);
    else printf("%d", c);
}
