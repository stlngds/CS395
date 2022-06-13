/************************************************
 * Id: bigg3448
 * 
 * HW7: Cyclic Tower of Hanoi
 ************************************************/

/************************************************
 * Declarations, Includes, Defines, etc.
 ************************************************/

#include <stdlib.h>
#include <stdio.h>


/************************************************
 * Prototypes
 ************************************************/
//Move n disks clockwise to the neighboring peg
void Clockwise(int n, char fromrod, char torod, char auxrod);
//Move n disks counterclockwise to the neighboring peg
void Counterclockwise(int n, char fromrod, char torod, char auxrod);

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
   Clockwise(n, 'A', 'B', 'C');
   Clockwise(n, 'B', 'C', 'A');
   return 0;
}

//Move n disks clockwise to the neighboring peg
void Clockwise(int n, char fromrod, char auxrod, char torod)
{
   if (n >= 1)
   {
      Counterclockwise(n-1, fromrod, torod, auxrod);
      printf("Move %c TO %c\n", fromrod, auxrod);
      Counterclockwise(n-1, torod, auxrod, fromrod);
      return;
   }
}

//Move n disks counterclockwise to the neighboring peg
void Counterclockwise(int n, char fromrod, char torod, char auxrod)
{
   if (n >= 1)
   {
      Counterclockwise(n-1, fromrod, torod, auxrod);
      printf("Move %c TO %c\n", fromrod, auxrod);
      Clockwise(n-1, torod, fromrod, auxrod);
      printf("Move %c TO %c\n", auxrod, torod);
      Counterclockwise(n-1, fromrod, torod, auxrod);
      return;
   }
}