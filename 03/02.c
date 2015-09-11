#include <stdio.h>
#include <stdlib.h>
#define EXIT_SUCCESS 0

int main( void )
{
  int item_number;
  double unit_price;
  int m = 0, d = 0, y = 0;

  printf("Enter item number: ");
  scanf("%d", &item_number);
  printf("Enter unit price: ");
  /*
   I've decided not to care about the constraint
   for 9999.99 maximum unit price because the exercise
   is not clear on what is required (truncation, re-input...?)
    */
  scanf("%lf", &unit_price);

  printf("Enter purchase date: (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &m, &d, &y);

  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%-16d$%.2f\t%d/%d/%d",item_number, unit_price, d,m,y);

  return EXIT_SUCCESS;
}
