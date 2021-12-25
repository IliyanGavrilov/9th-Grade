#include <stdio.h>
#include <stdlib.h>
#define maxu 30
#define maxp 20

int main()
{
    int marks[maxu][maxp];
    float avru[maxu];
    float avrp[maxp];
    int bru,brp,i,j;
    do{
        printf("Broi Uchenici: ");
        scanf("%d", &bru);
    }while(bru<1 || bru>maxu);

        do{
        printf("Broi Predmeti: ");
        scanf("%d", &brp);
    }while(brp<1 || brp>maxp);

    for(i=0;i<bru;i++)
    {
        for(j=0;j<brp;j++)
        {
            do{
                printf("Wuwedi ocenka: ");
                scanf("%d", &marks[i][j]);
            }while(marks[i][j]<2 || marks[i][j]>6);
        }
    }

    for(i=0;i<bru;i++)
    {
        avru[i] = 0;
        for(j=0;j<brp;j++)
        {
            avru[i]+=marks[i][j];
        }
        avru[i]=avru[i]/brp;
    }

    for(i=0;i<brp;i++)
    {
        avrp[i] = 0;
        for(j=0;j<bru;j++)
        {
            avrp[i]+=marks[j][i];
        }
        avrp[i]=avrp[i]/bru;
    }

    for(i=0;i<bru;i++)
    {
        for(j=0;j<brp;j++)
        {
            printf("%5d", marks[i][j]);
        }
        printf("%5.2f\n", avru[i]);
    }

    for(i=0;i<brp;i++)
    {
        printf("%5.2f", avrp[i]);
    }

    FILE *f;
    f=fopen("9b.csv", "w");
    if(f)
    {
        for(i=0;i<bru;i++)
        {
            for(j=0;j<brp;j++)
            {
                fprintf(f,"%d,", marks[i][j]);
            }
            fprintf(f,"%.2f\n", avru[i]);
        }

        for(i=0;i<brp;i++)
        {
            fprintf(f,"%.2f,", avrp[i]);
        }
    }
    fclose(f);

    return 0;
}
