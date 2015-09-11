#include <stdio.h>
#include <math.h>

#define EXIT_SUCCESS 0

/*
  wanted to compact it. looks terrible now.
*/

int main( void )
{
  int n, square = 0, i;
  printf("Enter a number n: ");
  scanf("%d", &n);
  for ( i = 2; ( square = i * i ) <= n ; i++)
  {
    ( square % 2 != 0) ? : printf("%d\n", square) ;
  }

  return EXIT_SUCCESS;
}
