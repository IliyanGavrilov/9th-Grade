#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("symbol = ");
    scanf("%c", &c);
    if(c>=97 && c<=122){
        printf("%c", c-32);
    }
    else {
        printf("%c", c);

    }
}
