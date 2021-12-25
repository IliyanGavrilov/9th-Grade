#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,y;
    do{
        printf("Month=");
        scanf("%d", &m);
        printf("Year=");
        scanf("%d", &y);
    }while(y<1 || m<1 || m>12);
    if(y%4==0 && y%100!=0 || y%400==0)
        switch(m)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12: printf("31 Days");break;
            case 4: case 6: case 9: case 11: printf("30 Days");break;
            case 2: printf("29 Days");break;
        }
    else
        switch(m)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12: printf("31 Days");break;
            case 4: case 6: case 9: case 11: printf("30 Days");break;
            case 2: printf("28 Days");break;
        }

}
