#include <stdio.h>
#include <stdlib.h>

float cel_to_fah(float celsius)
{
    celsius=(celsius*1.8)+32;
    return celsius;
}

int main()
{
    printf("%.02f\n", cel_to_fah(0));          // expected result: 32
    printf("%.02f\n", cel_to_fah(-32));        // -25.6
    printf("%.02f\n", cel_to_fah(-17.77778));  // 0
    printf("%.02f\n", cel_to_fah(36.6));       // 97.88

    return 0;
}
