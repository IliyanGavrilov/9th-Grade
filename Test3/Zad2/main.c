#include <stdio.h>
#include <stdlib.h>

int find_reversed_string(char* source, char* reversed_pattern)
{
    int source_size=0;

    while(source[source_size]!='\0')
    {
        source_size++;
    }

    for(int i=0;i<source_size;i++)
    {
        if(reversed_pattern[i]=='\0')
        {
            return 1;
        }
        if(reversed_pattern[i]!=source[source_size-1-i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char source[] = "Batman";
    char source2[] = "Joker";
    char reversed_pattern[]="nam";
    char reversed_pattern2[]="oJ";

    printf("%d\n",find_reversed_string(source,reversed_pattern));
    printf("%d",find_reversed_string(source2,reversed_pattern2));

    return 0;
}
