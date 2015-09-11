#include <stdio.h>

#define EXIT_SUCCESS 0

int main( void )
{
  double n, sum = 0;
  printf("This program sums a series of doubles: ");
  do
  {
    scanf("%lf", &n);
    sum += n;
  }
  while ( n != 0.0f );

  printf("The sum is: %.2f\n", sum);

  return EXIT_SUCCESS;
}
