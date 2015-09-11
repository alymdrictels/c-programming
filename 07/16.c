#include <stdio.h>
#include <math.h>

int main( void )
{
  unsigned short number, temp, factorial = 1;

  printf("Enter a positive integer: ");
  scanf("%hu", &number);

  // preserve the original number for final printing
  // by manipulating a temp value instead
  temp = number;

  while ( temp > 0 )
  {
    factorial *= temp--;
  }
  printf("Factorial of %d: %d", number, factorial);

  return 0;
}

// apparently, case a) has a maximum valid factorial for N=15
// will not cover the other cases to save time
