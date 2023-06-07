#include <stdio.h>

#define TAX_RATE (0.05f)

int main ()
{
   float dollar;

   printf("Enter dollar amount: ");
   scanf("%f", &dollar);

   float dollarPlusTax = dollar + (dollar * TAX_RATE);

   printf("With tax added: %.2f", dollarPlusTax);

   return 0;
}