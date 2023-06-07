#include <stdio.h>

int main ()
{
   int itemNum, d, m, y;
   float unitPrice;

   printf("Enter item number: ");
   scanf("%d", &itemNum);

   printf("Enter unit price: ");
   scanf("%f", &unitPrice);

   printf("Enter purchase date (mm/dd/yyyy) : ");
   scanf("%d/%d/%d", &d, &m, &y);

   printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
   printf("%d\t\t$ %.2f\t\t%d/%d/%d\n", itemNum, unitPrice, d, m, y);

   return 0;
}