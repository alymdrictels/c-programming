#include <stdio.h>

int gcd( int m, int n);

int main( void )
{
  printf("Enter a ratio (ex. \"2/4\"): ");

  int x, y;

  scanf("%d/%d", &x, &y);

  printf("The GCD of %d and %d is %d.",
    x, y,
    gcd(x,y)
  );

  return 0;
}

int gcd(int m, int n)
{
  return (n == 0) ? m : gcd(n, m % n);
}
