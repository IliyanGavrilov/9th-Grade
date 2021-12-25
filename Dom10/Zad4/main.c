#include <stdio.h>
#include <stdlib.h>

double at(double *a, double *end, int pos)
{
    int size=0;
    while(a+size!=end)
    {
        size++;
    }
    if(pos>=0)
    {
        return *(a+pos%size);
    }
    else
    {
        end--;
        return *(end+((pos+1)%size));
    }
}

int main()
{
    double array[] = {10.5, 20.5, 30.5, 40.5};
    double *end = &(array[4]);

    printf("%lf\n", at(array, end, 0)); // 10.5
    printf("%lf\n", at(array, end, 1)); // 20.5
    printf("%lf\n", at(array, end, -1)); // 40.5
    printf("%lf\n", at(array, end, -2)); // 30.5
    printf("%lf\n", at(array, end, 4)); // 10.5
    printf("%lf\n", at(array, end, 5)); // 20.5
    printf("%lf\n", at(array, end, -5)); // 40.5
    printf("%lf\n", at(array, end, -6)); // 30.5

    return 0;
}
