#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, n, count;
    printf("a = ");
    scanf("%d", &a);

    for(int i=0;i<=9;i++)
    {
        count = 0;

        n=a;
        while (n!=0)
        {
            if(n%10==i)
            {
                count++;
            }
            n=n/10;
        }

        printf("%d - %d\n", i, count);
    }

    return 0;
}
