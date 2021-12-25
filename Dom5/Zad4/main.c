#include <stdio.h>
#include <stdlib.h>

char alter_case(char c)
{
    int static flag=0;
    if(flag==0)
    {
        if(c>=65 && c<=90)
        {
            printf("%c\n", c+32);
        }
        else
        {
            printf("%c\n", c);
        }
        flag=1;
    }
    else
    {
        if(c>=97 && c<=122)
        {
            printf("%c\n", c-32);
        }
        else
        {
            printf("%c\n", c);
        }
        flag=0;
    }
}

int main()
{
    alter_case('a');  // a
    alter_case('a');  // A
    alter_case('a');  // a
    alter_case('B');  // B
    alter_case('B');  // b
    alter_case('1');  // 1
    alter_case('B');  // b

    return 0;
}
