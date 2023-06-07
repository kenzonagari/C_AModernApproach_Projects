#include <stdio.h>

int main ()
{
   int dollar;
   int billsDenominator[4] = {20, 10, 5, 1};

   printf("Enter dollar amount: ");
   scanf("%d", &dollar);

   int i;
   for (i = 0 ; i < 4 ; i++) {
      int billsAmount = dollar / billsDenominator[i];
      dollar = dollar - (billsAmount * billsDenominator[i]);
      printf("$%d bills: %d\n", billsDenominator[i], billsAmount);
   }

   return 0;
}