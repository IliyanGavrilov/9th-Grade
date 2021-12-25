#include <stdio.h>
#include <stdlib.h>

int remove_spaces(char* str)
{
    int i=0;
    int j=0;
    int counter=0;

    while(str[i]!='\0')
    {
        if(str[i]!= ' ' && str[i] != '\n')
        {
            str[j++]=str[i];
        }
        else
        {
            counter++;
        }
        i++;
    }
    str[j]='\0';
    return counter;
}

int main()
{
    char str[] = "Hello\nworld";
    char str2[] = "Hello world";
    char str3[] = "Hello \nworld";

    printf("%d, ", remove_spaces(str));
    printf("str=%s\n", str);
    printf("%d, ", remove_spaces(str2));
    printf("str=%s\n", str2);
    printf("%d, ", remove_spaces(str3));
    printf("str=%s\n", str3);

    return 0;
}
