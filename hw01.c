/************************************************
 * Id: bigg3448
 * 
 * HW1: Minimum distance algorithm
 ************************************************/

/************************************************
 * Declarations, Includes, Defines, etc.
 ************************************************/

#include <stdlib.h>
#include <stdio.h>


/************************************************
 * Prototypes
 ************************************************/

//MinDistance
//int MinDistance(int *A);

//Returns the (positive difference) between two ints
int diff(int x, int y);


/************************************************
 * Functions
 ************************************************/

int main(int argc, char *argv[])
{
   if(argc < 3)
   {
      printf("Pass elements of the array as arguments. e.g.\n %s 3 5 7 3 5 9 7\n", argv[0]);
      return 1;
   }
   
   int dmin = diff(atoi(argv[1]), atoi(argv[2]));
   int i, j;
   for(i = 1; i < argc; i++)
   {
      for(j = 1; j < argc; j++)
      {
         if ((i != j) && ((diff(atoi(argv[i]), atoi(argv[j])) < dmin)))
         {
            dmin = diff(atoi(argv[i]), atoi(argv[j]));
         }
      }
   }
   printf("%d\n", dmin);

   return 0;
}

//Returns the (positive difference) between two ints
int diff(int x, int y)
{
   int result = x-y;
   if(result < 0)
   {
      result = y-x;
   }
   return result;
}