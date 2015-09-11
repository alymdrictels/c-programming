#include <stdio.h>

#define EXIT_SUCCESS 0

int main( void )
{
  int m, n, remainder, gcd;
  printf("Enter two integers: ");
  scanf("%d %d", &m, &n);

  while ( n != 0 )
  {
    remainder = m % n;
    m = n;
    n = remainder;
  }
  gcd = m;

  printf("Greatest common divisor: %d", gcd);

  return EXIT_SUCCESS;
}
