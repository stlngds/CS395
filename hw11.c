/************************************************
 * Id: bigg3448
 * 
 * HW11: Insertion Sort
 * 
 * 
 * Insertion sort

Assume that A[n-2] elements are already sorted. All we need is to find an appropriate position for A[n − 1] among the sorted elements and insert it there. This is usually done by scanning the sorted subarray from right to left until the first element smaller than or equal to A[n − 1] is encountered to insert A[n − 1] right after that element. The resulting algorithm is called straight insertion sort or simply insertion sort.

Though insertion sort is clearly based on a recursive idea, it is more efficient to implement this algorithm bottom up, i.e., iteratively. Starting with A[1]and ending with A[n − 1],A[i]is inserted in its appropriate place among the first i elements of the array that have been already sorted (but, unlike selection sort, are generally not in their final positions). Here is pseudocode of this algorithm.

//Sorts a given array by insertion sort
//Input: An array A[0..n − 1] of integers given as command line arguements
//Output: Array A[0..n − 1] sorted in nondecreasing order
ALGORITHM   InsertionSort(A[0..n − 1])
   printArray
   for i ← 1 to n − 1 do
      v ← A[i]
      j ← i − 1
      while j ≥ 0 and A[j]> v do
         A[j + 1]← A[j]
         j ← j − 1
      A[j + 1] ← v
      printArray

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
   int i, j, v, vi, q;
   int arr[n];
   for (i = 0; i < n; i++)
   {
      arr[i] = atoi(argv[i+1]);
   }
   //print array
   for(i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
      if (i == 0) {
         printf("| ");
      }
   }
   printf("\n");

   //Selection Sort
   for (i = 1; i < n; i++) {
         v = arr[i];
         vi = i;
         j = i - 1;
         while (j >= 0 && arr[j] > v) {
            arr[j + 1] = arr[j];
            j = j - 1;
         }
         arr[j + 1] = v;

         for(q = 0; q < n; q++)
         {
            printf("%d ", arr[q]);
            if (q == vi) {
               printf("| ");
            }
         }
         printf("\n");
   }

      
   return 0;
}