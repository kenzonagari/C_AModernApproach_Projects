#include <stdio.h>

int main ()
{
   int x;
   printf("Enter x: ");
   scanf("%d", &x);

   int polyVal = (3 * (x * x * x * x * x)) 
                  + (2 * (x * x * x * x))
                  - (5 * (x * x * x))
                  - (1 * (x * x))
                  + (7 * x)
                  -6;

   printf("polynomial value: %d\n", polyVal);

   return 0;
}