#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[100], str2[100];
    int i=0,j=0;
    printf("str1=");
    gets(str1);
    printf("str2=");
    gets(str2);

    while(str1[i] != '\0')
    {
        i++;
    }
    while(str2[j] != '\0')
    {
        str1[i]=str2[j];
        j++;
        i++;
    }
    str1[i]='\0';
    printf("str=%s", str1);
    return 0;
}
