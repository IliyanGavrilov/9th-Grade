#include <stdio.h>
#include <stdlib.h>

int sum_digits(int number)
{
    int counter=0;
    while(number)
    {
        counter+=(number%10);
        number/=10;
    }
    return counter;
}

int reduce(int number)
{
    while(number>9)
    {
        number=sum_digits(number);
    }
    return number;
}

int main()
{
    printf("%d\n", sum_digits(0)); // 0
    printf("%d\n", sum_digits(642)); // 12
    printf("%d\n", reduce(642)); // 3

    return 0;
}
