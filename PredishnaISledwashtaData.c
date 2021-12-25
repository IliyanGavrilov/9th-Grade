#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int d,m,y;
    bool valid = 0;
    while(!valid){
        printf("Please enter a valid date!\n");
        printf("Day: ");
        scanf("%d", &d);
        printf("Month: ");
        scanf("%d", &m);
        printf("Year: ");
        scanf("%d", &y);

        if(y<0)
        {
            continue;
        }

        if(m<1 || m>12)
        {
            continue;
        }

        if(d<1 || d>31)
        {
            continue;
        }
        else
        {
            switch(m)
            {
                case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                    valid=1;
                    break;
                case 4: case 6: case 9: case 11:
                    if(d<31)
                    {
                        valid=1;
                    }
                    break;
                case 2:
                    if((y%4==0 && y%100!=0) || y%400==0)
                    {
                        if(d<30)
                        {
                            valid=1;
                        }
                    }
                    else
                    {
                        if(d<29)
                        {
                            valid=1;
                        }
                    }
                    break;
            }
        }
    }

    int pd=d, pm=m, py=y;
    int nd=d, nm=m, ny=y;

    if(d==1)
    {
        nd+=1;

        if(m==1)
        {
            pd=31;
            pm=12;
            py--;
        }
        else
        {
            switch(m)
            {
                case 2:case 4: case 6:case 9:case 11: pd=31; pm=m-1;break;
                case 5: case 7: case 8: case 10: case 12: pd=30; pm=m-1;break;
                case 3:
                    if((y%4==0 && y%100!=0) || y%400==0)
                    {
                        pd=29;pm=2;
                    }
                    else
                    {
                        pd=28;pm=2;
                    }
                    break;
            }
        }
    }
    else if(d>=28)
    {
        switch(m)
        {
            case 2:
                pd--;

                if(d==29)
                {
                    nd=1;
                    nm=3;
                }
                else if (d==28)
                {
                    if((y%4==0 && y%100!=0) || y%400==0)
                    {
                        nd=29;
                    }
                    else
                    {
                        nd=1;
                        nm=3;
                    }
                }
                break;
            case 12:
                pd--;
                if(d==31)
                {
                    nd=1;
                    nm=1;
                    ny++;
                }
                else
                {
                    nd++;
                }
                break;
            case 1: case 3: case 5: case 7: case 8: case 10:
                pd--;
                if(d==31)
                {
                    nd=1;
                    nm++;
                }
                else
                {
                    nd++;
                    nm++;
                }
                break;
            case 4: case 6: case 9: case 11:
                pd--;
                if(d==30)
                {
                    nd=1;
                    nm++;
                }
                else
                {
                    nd++;
                    nm++;
                }
                break;
        }
    }
    else
    {
        pd--;
        nd++;
    }

printf("Predishna Data:%d/%d/%d", pd,pm,py);
printf("\nSledwashta Data:%d/%d/%d", nd,nm,ny);
}
