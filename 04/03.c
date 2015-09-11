#include <stdio.h>
#define EXIT_SUCCESS 0

int main( void )
{
  int d1, d2, d3;
  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &d1, &d2, &d3);
  printf("The reversal is: %1d%1d%1d", d3, d2, d1);
  return EXIT_SUCCESS;
}
