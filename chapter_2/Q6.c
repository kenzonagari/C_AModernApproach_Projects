#include <stdio.h>

int main ()
{
   int x;
   printf("Enter x: ");
   scanf("%d", &x);

   int polyVal = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6; // Horner's rule for polynomial evaluation

   printf("polynomial value: %d\n", polyVal);

   return 0;
}