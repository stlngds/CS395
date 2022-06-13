/************************************************
 * Id: bigg3448
 * 
 * HW9: Selection Sort
 ************************************************/

/************************************************
 * Declarations, Includes, Defines, etc.
 ************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


/************************************************
 * Prototypes
 ************************************************/
//


/************************************************
 * Functions
 ************************************************/

int main(int argc, char *argv[])
{
   //init
   int n = argc - 1;
   int i, j, q, min, temp;
   int arr[n];
   for (i = 0; i < n; i++)
   {
      arr[i] = atoi(argv[i+1]);
   }
   //print array
   for(i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
   //Selection Sort
   for(i = 0; i <= n-2; i++)
   {
      min = i;
      for (j = i+1; j <= n-1; j++)
      {
         if (arr[j] < arr[min])
         {
            min = j;
         }
      }
      temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
      for(q = 0; q < n; q++)
      {
         printf("%d ", arr[q]);
      }
      printf("\n");
   }
   return 0;
}