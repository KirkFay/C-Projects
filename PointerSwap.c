/*
   * Kirk Fay
   * A simple program to swap integers using pointers
*/
#include <stdio.h>
int main (int argc, char *argv[])
{
   void swap (int *, int *);
   int a, b;

   printf ("Please enter two integers: ");
   scanf ("%d %d", &a, &b);

   swap (&a, &b);

   printf ("a = %d b = %d\n", a, b);
   return 0;
}

void swap (int* x, int* y)
{
   int temp;
   temp = *x; *x = *y; *y = temp;
   return;
}
