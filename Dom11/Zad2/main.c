#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i,words=1;
    printf("str=");
    gets(str);


    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            words++;
        }
    }
    printf("words=%d", words);

    return 0;
}
