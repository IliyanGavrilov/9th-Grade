#include <stdio.h>
#include <stdlib.h>

int str_size(char* s)
{
    int size=0;
    while(s[size]!='\0')
    {
        size++;
    }
    return size;
}

int str_replace(char* str1, char* str2, char* str3)
{
    int size1=str_size(str1);
    int size2=str_size(str2);
    int size3=str_size(str3);
    int counter=0;

    if(size3==0)
    {
        int i=0;
        while(str1[i]!='\0')
        {
            if(str1[i]==str2[0])
            {
                int found=1;
                for(int j=1;j<size2;j++)
                {
                    if(str1[j+i]!=str2[j])
                    {
                        found=0;
                        break;
                    }
                }

                if(found)
                {
                    counter++;
                    for(int j=0;j<size2;j++)
                    {
                        str1[j+i]='*';
                    }
                    i+=(size2-1);
                }
            }
            i++;
        }
    }
    else if(size3>=size2)
    {
        if(size3>size2)
        {
            str3[size2]='\0';
        }

        int i=0;
        while(str1[i]!='\0')
        {
            if(str1[i]==str2[0])
            {
                int found=1;
                for(int j=1;j<size2;j++)
                {
                    if(str1[j+i]!=str2[j])
                    {
                        found=0;
                        break;
                    }
                }

                if(found)
                {
                    counter++;
                    for(int j=0;j<size2;j++)
                    {
                        str1[j+i]=str3[j];
                    }
                    i+=(size2-1);
                }
            }
            i++;
        }
    }
    else if(size3<size2)
    {
        int i=0;
        while(str1[i]!='\0')
        {
            if(str1[i]==str2[0])
            {
                int found=1;
                for(int j=1;j<size2;j++)
                {
                    if(str1[j+i]!=str2[j])
                    {
                        found=0;
                        break;
                    }
                }

                if(found)
                {
                    counter++;
                    for(int j=0;j<size2;j++)
                    {
                        str1[j+i]=str3[j%size3];
                    }
                    i+=(size2-1);
                }
            }
            i++;
        }
    }

    return counter;

}

int main()
{
    char str1[] = "Batman1";
    char str2[] = "man1";
    char str3[] = "girl";

    char str4[] = "Batman1man1";
    char str5[] = "man1";
    char str6[] = "girl";

    char str7[] = "Batman";
    char str8[] = "man";
    char str9[] = "";

    char str10[] = "Password";
    char str11[] = "Pass";
    char str12[] = "";

    char str13[] = "112233";
    char str14[] = "2";
    char str15[] = "";

    char str16[] = "Batman";
    char str17[] = "man";
    char str18[] = "girl";

    char str19[] = "56789";
    char str20[] = "5678";
    char str21[] = "123";

    char str22[] = "Hatmantman";
    char str23[] = "tman";
    char str24[] = "bi";

    printf("%d\n", str_replace(str1,str2,str3));
    printf("%d\n", str_replace(str4,str5,str6));
    printf("%d\n", str_replace(str7,str8,str9));
    printf("%d\n", str_replace(str10,str11,str12));
    printf("%d\n", str_replace(str13,str14,str15));
    printf("%d\n", str_replace(str16,str17,str18));
    printf("%d\n", str_replace(str19,str20,str21));
    printf("%d\n", str_replace(str22,str23,str24));

    printf("%s,%s\n", str1,str4);
    printf("%s,%s,%s\n", str7,str10,str13);
    printf("%s\n", str16);
    printf("%s,%s\n", str19,str22);

    return 0;
}
