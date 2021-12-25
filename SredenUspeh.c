#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;

    while(n<1){
        printf("n=");
        scanf("%d", &n);
    }

    float sum = 0;
    float a;

    for(int i = 0; i < n; i++){
        do{
            printf("a=");
            scanf("%f", &a);
        }while(a < 2 && a > 6);

        sum += a;
    }
    sum=sum/n;
    printf("sum=%f", sum);
}
