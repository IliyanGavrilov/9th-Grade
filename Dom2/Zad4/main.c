#include <stdio.h>
#include <stdlib.h>

float calc_binary_op(char operator, float operand1, float operand2)
{
    float result=0;
    if(operator=='+')
    {
        result=operand1+operand2;
    }
    else if(operator=='-')
    {
        result=operand1-operand2;
    }
    else if(operator=='*')
    {
        result=operand1*operand2;
    }
    else if(operator=='/')
    {
        if(operand2==0)
        {
            result=0;
        }
        else
        {
            result=operand1/operand2;
        }
    }
    else
    {
        result=0;
    }
    return result;
}

int main()
{
    printf("%f\n", calc_binary_op('+', -1, 2));    // 1
    printf("%f\n", calc_binary_op('-', 1, 2));     // -1
    printf("%f\n", calc_binary_op('-', 2, 1));     // 1
    printf("%f\n", calc_binary_op('*', 2, -2));    // -4
    printf("%f\n", calc_binary_op('/', 25.5, 4));  // 6.375
    printf("%f\n", calc_binary_op('/', 3.14, 0));  // 0
    printf("%f\n", calc_binary_op('i', 2, 200));   // 0
    return 0;
}
