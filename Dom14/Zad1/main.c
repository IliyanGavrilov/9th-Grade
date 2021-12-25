#include <stdio.h>
#include <stdlib.h>

void flip_negative_and_average(float* arr, int size)
{
    int counter=0;
    float avr=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            avr+=arr[i];
            counter++;
            arr[i]=-arr[i];
        }
    }
    if(counter==0)
    {
        printf("0");
    }
    else
    {
        avr=avr/counter;
        printf("avr=%f\n", avr);
    }
}

int main()
{
    float arr[]= {1.1, -2.5, 3.3, -4.5, 5.5};
    int size=sizeof(arr)/sizeof(arr[0]);

    flip_negative_and_average(arr,size);
    printf("arr=");
    for(int i=0;i<size;i++)
    {
        printf("%f ", arr[i]);
    }

    return 0;
}
