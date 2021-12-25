#include <stdio.h>
#include <stdlib.h>

int main ()
{
   int arr[8][8] = {0};
   int counter=1;

   for (int i = 0; i < 8; i++ )
   {
      for (int j = 0; j < 8; j++ )
      {
         if(i<=1)
         {
             arr[i][j]=counter;
             counter++;
         }
         if(i>=6)
         {
             arr[i][j]=counter;
             counter++;
         }
      }
   }

   for (int i = 0; i < 8; i++ )
   {
        for (int j = 0; j < 8; j++ )
        {
            if(arr[i][j]<=8)
            {
                printf("%d  ", arr[i][j]);
            }
            else
            {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
   }

   return 0;
}
