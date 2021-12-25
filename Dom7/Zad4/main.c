#include <stdio.h>
#include <stdlib.h>

int main()
{
    char abc[26];
    char *ptr=&abc;

    for(int i=0;i<26;i++)
    {
        *ptr='A'+i;
        ptr++;
    }
    ptr=abc;

    for(int i=0;i<26;i++)
    {
        printf("%c, ", *ptr);
        ptr++;
    }

    return 0;
}
