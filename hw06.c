/************************************************
 * Id: bigg3448
 * 
 * HW6: Restricted Tower of Hanoi
 ************************************************/

/************************************************
 * Declarations, Includes, Defines, etc.
 ************************************************/

#include <stdlib.h>
#include <stdio.h>


/************************************************
 * Prototypes
 ************************************************/
//Recursively solves the Restricted Tower of Hanoi for any n.
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

//Recursively solves the Restricted Tower of Hanoi.
void Hanoi(int n, char fromrod, char torod, char auxrod)
{
   if (n >= 1)
   {
      Hanoi(n-1, fromrod, torod, auxrod);
      printf("Move %c TO %c\n", fromrod, auxrod);
      Hanoi(n-1, torod, fromrod, auxrod);
      printf("Move %c TO %c\n", auxrod, torod);
      Hanoi(n-1, fromrod, torod, auxrod);
      return;
   }
}