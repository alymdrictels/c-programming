#include <stdio.h>
#include <math.h>

#define EXIT_SUCCESS 0

int main( void )
{
  double x, result;

  printf("Enter a value for x: ");
  scanf("%lf", &x);

  result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

  printf("((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6 = %.2f", result);

  return EXIT_SUCCESS;
}
