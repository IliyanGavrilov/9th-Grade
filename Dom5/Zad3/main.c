#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_perfect_square(int n)
{
    int result2;
    float result;
    result= sqrt(n);
    result2=result;
    if(result==result2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    if(is_perfect_square(4))
    {
        printf("4 is a perfect square number!\n");  // should go in here
        printf("2 * 2 = 4\n");
    }
    else
    {
        printf("4 is not a square number!\n");  // should not get printed
    }
    printf("%d\n", is_perfect_square(0));        // expected 1
    printf("%d\n", is_perfect_square(-5));       // 0
    printf("%d\n", is_perfect_square(1));        // 1
    printf("%d\n", is_perfect_square(2));        // 0
    printf("%d\n", is_perfect_square(9));        // 1
    printf("%d\n", is_perfect_square(1048576));  // 1

    return 0;
}
