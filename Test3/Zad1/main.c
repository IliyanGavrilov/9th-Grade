#include <stdio.h>
#include <stdlib.h>

int replace_digits(char* str)
{
    int i=0;
    int counter=0;
    while(str[i]!='\0')
    {
        if(str[i]>='0' && str[i]<='9')
        {
            str[i]='!';
            counter++;
        }
        i++;
    }
    return counter;
}

int main()
{
    char str[] = "123man";

    int count = replace_digits(str);
    printf("string=%s \ncounter=%d", str, count);

    return 0;
}
