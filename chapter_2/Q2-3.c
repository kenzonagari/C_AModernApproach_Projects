#include <stdio.h>

#define PI (3.1412f)

int main ()
{
   float radM;
   printf("Enter radius of sphere: ");
   scanf("%f", &radM);

   float volume = (4.0f / 3.0f) * PI * (radM * radM * radM);

   printf("Volume of sphere: %.2f\n", volume);

   return 0;
}