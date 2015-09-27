#include <stdio.h>
#include <math.h>

int compute_for_x( int x );

int main( void )
{
  printf( "3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6\n"\
          "Enter x: \n"\
  );

  int x;

  scanf("%d", &x);
  printf("The result is: %d", compute_for_x(x));

  return 0;
}

int compute_for_x( int x )
{
  return 3*pow(x, 5) + 2*pow(x, 4) - 5*pow(x,3) + 7*x - 6;
}
