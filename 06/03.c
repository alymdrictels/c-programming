#include <stdio.h>
#define EXIT_SUCCESS 0

int gcd( int a, int b );

int main( void )
{
  int numerator, denominator, gc;

  printf("Enter a fraction: (m/n) ");
  scanf("%d/%d", &numerator, &denominator);

  gc = gcd( numerator, denominator );
  numerator /= gc;
  denominator /= gc;

  printf("In lowest terms: %d", numerator);

  if ( denominator != 1)
  {
      printf("/%d", denominator);
  }

  return EXIT_SUCCESS;
}

int gcd( int a, int b)
{
  int remainder;
  while ( b != 0)
  {
    remainder = a % b;
    a = b;
    b = remainder;
  }

  return a;
}
