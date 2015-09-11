#include <stdio.h>

#define EXIT_SUCCESS 0

int main( void )
{
  int amount;
  int twenties = 0, tens = 0, fives = 0;

  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  twenties = amount / 20;
  amount -= twenties * 20;
  tens = amount / 10;
  amount -= tens * 10;
  fives = amount / 5;
  amount -= fives; /* this final amount just happens to be the ones */
  printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d", twenties, tens, fives, amount);

  return EXIT_SUCCESS;
}
