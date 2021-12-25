#include <stdio.h>
#include <string.h>

void reverse_arr(int* arr, int size)
{
	int *p1, *p2, temp;
	p1 = arr;
	p2 = arr+size-1;

	for (int i = 0; i < size / 2; i++)
    {
		temp = *p2;
		*p2 = *p1;
		*p1 = temp;
		p1++;
		p2--;
	}
}

int main()
{
	int arr[100];
	int size;
	printf("size=");
	scanf("%d", &size);
	printf("Arr=");

	for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

	reverse_arr(arr, size);
	for(int i=0;i<size;i++)
    {
        printf("%d", arr[i]);
    }

	return 0;
}
