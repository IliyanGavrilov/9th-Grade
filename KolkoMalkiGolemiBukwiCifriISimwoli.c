#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lowercase=0, uppercase=0, numbers=0, drug=0;
    char arr[1000];
    printf("arr = ");
    scanf("%s", arr);

    int len = strlen(arr);

    for(int i = 0; i < len; i++) {
        if(arr[i]>=97 && arr[i]<=122){
            lowercase++;
        }
        else if(arr[i]>=65 && arr[i]<=90){
            uppercase++;
        }
        else if(arr[i]>=48 && arr[i]<=57){
            numbers++;
        }
        else {
            drug++;
        }
    }

    printf("%d lowercase\n", lowercase);
    printf("%d uppercase\n", uppercase);
    printf("%d numbers\n", numbers);
    printf("%d drugi\n", drug);
}
