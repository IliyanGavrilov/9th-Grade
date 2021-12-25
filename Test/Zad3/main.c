#include <stdio.h>
#include <stdlib.h>

int tries=0;

int check_passcode(int current_number)
{
    tries++;
    if(tries>5)
    {
        return -1;
    }

    int passcode=1234;

    if(current_number!=passcode)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    printf("%d\n", check_passcode(0)); // 0
    printf("%d\n", check_passcode(2020)); // 0
    printf("%d\n", check_passcode(300)); // 0
    printf("%d\n", check_passcode(42)); // 0
    printf("%d\n", check_passcode(567)); // 0
    printf("%d\n", check_passcode(314)); // -1 - nqmame poweche opiti
    printf("%d\n", check_passcode(1234)); // -1 - chisloto e wqrno, no nqmame prawo na poweche opiti
    return 0;
}
