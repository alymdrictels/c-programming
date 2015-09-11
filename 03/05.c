#include <stdio.h>
#include <math.h>

#define EXIT_SUCCESS 0

int main( void )
{
  double x, result;

  printf("Enter a value for x: ");
  scanf("%lf", &x);

  result = 3 * pow(x, 5) + 2 * pow (x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;

  printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %.2f", result);

  return EXIT_SUCCESS;
}
