/************************************************
 * Id: bigg3448
 * 
 * HW5: Tower of Hanoi
 ************************************************/

/************************************************
 * Declarations, Includes, Defines, etc.
 ************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>


/************************************************
 * Prototypes
 ************************************************/
//Recursively solves the Tower of Hanoi for any n.
void Hanoi(int n, char fromrod, char torod, char auxrod);

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
   int n;
   n = atoi(argv[1]);
   Hanoi(n, 'A', 'C', 'B');
   return 0;
}

//Recursively solves the Tower of Hanoi for any n in 2^n-1 steps. Surprisingly simple.
void Hanoi(int n, char fromrod, char torod, char auxrod)
{
   if (n == 1)
   {
      printf("Move %c TO %c\n", fromrod, torod);
      return;
   }
   Hanoi(n-1, fromrod, auxrod, torod);
   printf("Move %c TO %c\n", fromrod, torod);
   Hanoi(n-1, auxrod, torod, fromrod);
   return;
}