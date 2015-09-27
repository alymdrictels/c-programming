#include <stdio.h>

// this function prints a binary version of the integer provided
// while the number is not equal to zero, divide it by 2,
// take a 2-modulus of its digits and print the character '0' or '1'

void pb( int );

int main( void )
{
  int number = 522;
  printf("The result of pb(%d) is: ", number);
  pb(number);
  return 0;
}

void pb(int n)
{
  if ( n != 0 )
  {
    pb(n / 2);
    putchar('0' + n % 2);
  }
}
