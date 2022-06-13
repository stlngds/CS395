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
//Hoare partitioning function
int partition(int arr[], int low, int high, int n);

//Quicksort
void quickSort(int arr[], int low, int high, int n);

/************************************************
 * Functions
 ************************************************/

int main(int argc, char *argv[])
{
   //init
   int n = argc - 1;
   int i, q;
   int arr[n];
   for (i = 0; i < n; i++)
   {
      arr[i] = atoi(argv[i+1]);
   }

   quickSort(arr, 0, n-1, n);
   int low = 0, high = n-1;
   //print array
      for(q = 0; q < n; q++)
      {
         if (q == low) {
            printf("[");
         }
         printf("%d", arr[q]);
         if (q == high) {
            printf("] ");
         }
         printf(" ");
      }
      printf("\n");
   return 0;
}

int partition(int arr[], int low, int high, int n) {
   int p = arr[low];
   int i = low;
   int j = high + 1;
   int tmp = 9999;
   while (1) {
      do {
         i++;
      } while (!(arr[i] >= p));
      do {
         j--;
      } while (!(arr[j] <= p));

      if (i >= j) {
         break;
      }

      //swap
      tmp = arr[i];
      arr[i] = arr[j];
      arr[j] = tmp;
   }
   //swap
   tmp = arr[low];
   arr[low] = arr[j];
   arr[j] = tmp;
   
   return j;
}

void quickSort(int arr[], int low, int high, int n) {
   int q;
   if (low < high) {
      int s = partition(arr, low, high, n);
      quickSort(arr, low, s - 1, n);
      quickSort(arr, s + 1, high, n);

      //print array
      for(q = 0; q < n; q++)
      {
         if (q == low) {
            printf("[");
         }
         printf("%d", arr[q]);
         if (q == high) {
            printf("] ");
         }
         printf(" ");
      }
      printf("\n");
   }
}