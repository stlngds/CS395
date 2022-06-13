/************************************************
 * Id: bigg3448
 * 
 * HW8: BruteForceStringMatch
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
   int i, j;
   int found = 0;
   printf("Matches found at locations:");
   for(i = 0; i <= strlen(argv[2]) - strlen(argv[1]); i++)
   {
      j = 0;
      while (j < strlen(argv[1]) && argv[1][j] == argv[2][i+j])
      {
         j++;
         if (j == strlen(argv[1]))
         {
            printf(" %i", i);
            found = 1;
         }
      }

   }
   if (found == 0)
   {
      printf(" -1");
   }
   printf("\n");
   return 0;
}