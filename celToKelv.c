#include <stdio.h>
#include <stdlib.h>

float celToKelv(float a)
{
    a=a+273.15;
    return a;
}

int main()
{
    float a;
    printf("Celcius=");
    scanf("%f", &a);
    printf("Kelvin:%.2f", celToKelv(a));
    return 0;
}
