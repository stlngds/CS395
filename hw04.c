/************************************************
 * Id: bigg3448
 * 
 * HW4: Gaussian elimination
 ************************************************/

/************************************************
 * Declarations, Includes, Defines, etc.
 ************************************************/

#include <stdlib.h>
#include <stdio.h>


/************************************************
 * Prototypes
 ************************************************/
//Prints matrix
void printMatrix(float *arr[], int n);

/************************************************
 * Functions
 ************************************************/

int main(int argc, char *argv[])
{
   //init
   int i, j, n, k, l, m, tempji;
   if(argc < 2)
   {
      printf("Pass multiple integers as arguments.\n");
      return 1;
   }
   n = atoi(argv[1]);
   if(argc != n*(n+1)+2)
   {
      printf("Number of variables does not match dimensions given.\n");
      return 1;
   }

   //array initialization
   float arr[n][n+1];
   m = 1;
   for (i = 0; i < n; i++)
   {
      for(j = 0; j < n+1; j++)
      {
         arr[i][j] = atoi(argv[m+1]);
         m++;
      }
   }

   //printMatrix here because it threw a fit passing a 2D array
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n+1; j++)
      {
         printf("%.2f ", arr[i][j]);
      }
      printf("\n");
   }
   printf("\n");

   //Gaussian Elimination
   for (i = 0; i <= n-2; i++)
   {
      for (j = i+1; j <= n-1; j++)
      {
         tempji = arr[j][i];
         for (k = i; k <= n; k++)
         {
            arr[j][k] = arr[j][k] - (arr[i][k] * tempji / arr[i][i]);
         }
      }
      //printMatrix here because it threw a fit passing a 2D array
      for (l = 0; l < n; l++)
      {
         for (m = 0; m < n+1; m++)
         {
            printf("%.2f ", arr[l][m]);
         }
         printf("\n");
      }
      printf("\n");
   }


   //printMatrix(arr, n);
   return 0;
}

//Prints n x n+1 float matrix to two decimal points.
void printMatrix(float *arr[], int n)
{
   int i, j;
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n+1; j++)
      {
         printf("%.2f ", arr[i][j]);
      }
      printf("\n");
   }
}