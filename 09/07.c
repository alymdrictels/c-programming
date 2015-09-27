#include <stdio.h>

int power( int, int );

int main( void )
{
  printf( "Enter a number and a power: " );

  int number, pow;

  scanf("%d %d", &number, &pow);
  printf("\nThe result is: %d", power(number, pow));

  return 0;
}

int power( int x, int y )
{
  if ( y == 0 ) return 1;

  int tmp;

  if ( y % 2 == 0 ) {
    tmp = power( x, y / 2 );
    //printf("shortcut at power of %d\n", y);
    return tmp * tmp;
  } else {
    return x * power(x, y - 1);
  }
}
