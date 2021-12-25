#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000],maxstr[100],minstr[100];
    int pos=0,counter=0,max=999,min=999,flag=0;
    printf("str=");
    gets(str);

    for(int i=0;str[i]!='\0';i++)
    {
        counter++;
        if(str[i]==' ')
        {
            if(flag==0)
            {
                max=counter;
            }
            counter=0;
            flag=1;
        }
        if(counter>max)
        {
            max=counter;
            pos=i+1;
        }
    }

    printf("nai-golqma duma: ");
    for(int i=pos-max;i!=pos;i++)
    {
        maxstr[i]=str[i];
        printf("%c",maxstr[i]);
    }
    printf("\n");
    //min
    pos=0;
    flag=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            if(counter<min)
            {
                min=counter;
                pos=i;
            }
            counter=0;
        }
        else
        {
            counter++;
        }
    }

    printf("nai-malka duma: ");
    for(int i=pos-min;i!=pos;i++)
    {
        minstr[i]=str[i];
        printf("%c",minstr[i]);
    }

    return 0;
}
