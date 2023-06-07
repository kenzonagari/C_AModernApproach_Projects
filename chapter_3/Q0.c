#include <stdio.h>

int main ()
{
   int i;
   float x;
   i = 40;
   x = 839.21f;
   printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
   printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

   printf("%6d, %4d\n", 86, 1040);
   printf("%12.5e\n", 30.253);
   printf("%.4f\n", 83.162);
   printf("%-6.2g\n", .0000009979);
   
   return 0;
}
