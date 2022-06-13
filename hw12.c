/************************************************
 * Id: bigg3448
 * 
 * HW12: Compare sorts
 * 
 * Compare sorts

Write a computer programs merging
   i) straight insertion sort,
   ii) selection sort, and
   iii) quicksort;
and compare their performance on random arrays of sizes 10^n for n = 2, 3, and 4.
If your computer runs too fast and your run times are mostly 0, increase n to
3,4,5 or higher as needed. Your lowest value can be 0, but ensure your two higer
values are for each sorting algorithm are not.

Output the comparative performance (as system-time taken by the programs) in a table.

Note: This assignment will be marked manually.
Note: There is no input for this program. The arrays need to be populated by the code itself.

Your output should look something like this:
//+-----------------------+-----------------+----------------+------------+
//|    Number of Elements |  Selection Sort | Insertion sort |  Quicksort |
//+-----------------------+-----------------+----------------+------------+
//|                    100|               50|              60|          30|
//|                   1000|              700|             800|         400|
//|                  10000|             8000|            1200|        6000|
//+-----------------------+-----------------+----------------+------------+

Notice that the output table is formatted like a comment.
Run your code three times and copy and paste the output to the end of your code before you submit it.

Note: To get the current time in milliseconds:
http://man7.org/linux/man-pages/man2/gettimeofday.2.html
   #include <time.h>
   #include <sys/time.h>

   struct timeval start, stop;
   gettimeofday(&start, NULL);
   /// Run code here
   gettimeofday(&stop, NULL);
   selection1Time = (double)(stop.tv_sec - start.tv_sec) * 1000 + (double)(stop.tv_usec - start.tv_usec) / 1000;

Note 2: To create a random number:
Do this once:
   #include <stdlib.h>     /* srand, rand */
   //#include <time.h>       /* time */
   //srand (time(NULL));

//Then use this any time you need another random number:
   //int newvalue = rand() %10; // get a number from 0 to 9

 //************************************************/

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