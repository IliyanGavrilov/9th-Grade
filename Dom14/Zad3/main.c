#include <stdio.h>
#include <stdlib.h>

int group_negatives(int* a, int* b, int a_gol, int b_gol){
    int i, f, swap, g, h;
    for(i=0; i<a_gol; i++){
        for(f=0; f<b_gol; f++){
            if(a[i] >= b[f]){
                swap = a[i];
                a[i] = b[f];
                b[f] = swap;
            }
        }
    }
    printf("arr1=");
    for(g=0; g<a_gol; g++){
        printf("%d ", a[g]);
    }
    printf("\narr2=");
    for(h=0; h<b_gol; h++){
        printf("%d ", b[h]);
    }
}

int main()
{
    int a[] = {1, -2, 3, -4};
    int a_gol = sizeof(a)/sizeof(a[0]);
    int b[] = {5, -6, 7, -8, 9, -10};
    int b_gol = sizeof(b)/sizeof(b[0]);
    group_negatives(a, b, a_gol, b_gol);

    return 0;
}
