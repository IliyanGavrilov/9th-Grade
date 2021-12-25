#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b = 1;
    int m, n;

    printf("a = ");
    scanf("%f", &a);
    printf("n = ");
    scanf("%d", &n);

    if(n < 0) {
        m = -n;
    } else {
        m = n;
    }

    for(int i = 0; i < m; i++) {
        b *= a;
    }

    if(n < 0) {
        b = 1/b;
    }

    printf("%f", b);
}
