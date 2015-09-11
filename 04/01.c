#include <stdio.h>
#define EXIT_SUCCESS 0

int main( void )
{
  int number;
  printf("Enter a two-digit number: ");
  scanf("%2d", &number);
  printf("The reversal is: %d%d", number % 10, number / 10);
  return EXIT_SUCCESS;
}
