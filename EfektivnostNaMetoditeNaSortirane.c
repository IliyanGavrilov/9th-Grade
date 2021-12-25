#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int c;
    printf("1-Random\n2-Best\n3-Worst\n");
    scanf("%d", &c);
    clock_t start_t, end_t;
    double total_t;

    int size=10000;
    int t[size], t2[size], t3[size];
    srand(time(NULL));
    if(c>0 && c<4)
    {
        if(c==1)
        {
            for(int i=0;i<size;i++)
            {
                int r = rand();
                t[i] = r;
                t2[i] = r;
                t3[i] = r;
            }
        }
        else if(c==2)
        {
            for(int i=0;i<size;i++)
            {
                t[i] = i+1;
                t2[i] = i+1;
                t3[i] = i+1;
            }
        }
        else
        {
            for(int i=0;i<size;i++)
            {
                t[i] = size-i;
                t2[i] = size-i;
                t3[i] = size-i;
            }
        }

        start_t = clock();
        //Bubble Sort
        for(int i=0;i<size-1;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(t[i]>t[j])
                {
                    int temp=t[i];
                    t[i]=t[j];
                    t[j]=temp;
                }
            }
        }
        //Bubble Sort
        end_t = clock();
        total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
        printf("Bubble Sort: %f secs \n", total_t);


        start_t = clock();
        //Selection Sort
        for(int i=0;i<size-1;i++)
        {
            int min=i;
            for(int j=i+1;j<size;j++)
            {
                if(t2[j]<t2[min])
                {
                    min=j;
                }
            }

            int temp=t2[min];
            t2[min]=t2[i];
            t2[i]=temp;
        }
        //Selection Sort
        end_t = clock();
        total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
        printf("Selection Sort: %f secs \n", total_t);



        start_t = clock();
        //InsertionSort
        int key, j;
        for (int i = 1; i < size; i++)
        {
            key = t3[i];
            j = i - 1;
            while (j >= 0 && t3[j] > key) {
                t3[j + 1] = t3[j];
                j = j - 1;
            }
            t3[j + 1] = key;
        }
         //InsertionSort
        end_t = clock();
        total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
        printf("Insertion Sort: %f secs", total_t);

    }

    return 0;
}
