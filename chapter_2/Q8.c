#include <stdio.h>

int main ()
{
   float loan, interestRate, monthlyPay;

   printf("Enter amount of loan: ");
   scanf("%f", &loan);
   printf("Enter interest rate (in %%): ");
   scanf("%f", &interestRate);
   printf("Enter monthly payment: ");
   scanf("%f", &monthlyPay);

   loan = loan - monthlyPay + (loan * ((interestRate / 12) * 0.01f));
   printf("Balance remaining after first payment: %.2f\n", loan);

   loan = loan - monthlyPay + (loan * ((interestRate / 12) * 0.01f));
   printf("Balance remaining after second payment: %.2f\n", loan);

   loan = loan - monthlyPay + (loan * ((interestRate / 12) * 0.01f));
   printf("Balance remaining after third payment: %.2f\n", loan);

   return 0;
}