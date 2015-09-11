#include <stdio.h>
#define EXIT_SUCCESS 0

int main( void )
{
  int number;
  printf("Enter a three-digit number: ");
  scanf("%3d", &number);
  printf("The reversal is: %d%d%d", number % 10, number / 10 % 10, number / 100);
  return EXIT_SUCCESS;
}
