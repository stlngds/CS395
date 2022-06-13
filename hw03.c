/************************************************
 * Id: bigg3448
 * 
 * HW3: Brute-forcing 2^n
 ************************************************/

/************************************************
 * Declarations, Includes, Defines, etc.
 ************************************************/

#include <stdlib.h>
#include <stdio.h>


/************************************************
 * Prototypes
 ************************************************/

//Recursively computes 2^n, incredibly inefficiently.
int bad2n(int n);


/************************************************
 * Functions
 ************************************************/

int main(int argc, char *argv[])
{
   if(argc != 2)
   {
      printf("Pass one integer as an argument.\n");
      return 1;
   }
   printf("%d\n", bad2n(atoi(argv[1])));

   return 0;
}

//Recursively computes 2^n, incredibly inefficiently.
int bad2n(int n)
{
   if (n < 1)
   {
      return 1;
   }
   else
   {
      return bad2n(n-1) + bad2n(n-1);
   }
}