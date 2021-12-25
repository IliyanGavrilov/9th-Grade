#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100], rev[1000];
    int l;
    printf("length=");
    scanf("%d", &l);
    printf("string=");
    scanf("%s", &str);

    for(int i=l-1;i>=0;i--)
    {
        printf("%c ", str[i]);
    }

    return 0;
}
