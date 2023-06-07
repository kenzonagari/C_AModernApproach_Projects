#include <stdio.h>

int main ()
{
   int dollar;

   printf("Enter dollar amount: ");
   scanf("%d", &dollar);

   int billsDenominator = 20;
   int billsAmount = dollar / billsDenominator;
   dollar = dollar - (billsAmount * billsDenominator);
   printf("$%d bills: %d\n", billsDenominator, billsAmount);

   billsDenominator = 10;
   billsAmount = dollar / billsDenominator;
   dollar = dollar - (billsAmount * billsDenominator);
   printf("$%d bills: %d\n", billsDenominator, billsAmount);

   billsDenominator = 5;
   billsAmount = dollar / billsDenominator;
   dollar = dollar - (billsAmount * billsDenominator);
   printf("$%d bills: %d\n", billsDenominator, billsAmount);

   billsDenominator = 1;
   billsAmount = dollar / billsDenominator;
   dollar = dollar - (billsAmount * billsDenominator);
   printf("$%d bills: %d\n", billsDenominator, billsAmount);

   return 0;
}