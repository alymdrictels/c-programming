#include <stdio.h>
#include <math.h>

#define EXIT_SUCCESS 0

int main( void )
{
  int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11,\
   s1, s2, result;
  printf("Enter a group of 11 digits: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", \
        &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);
  s1 = d1 + d3 + d5 + d7 + d9 + d11;
  s2 = d2 + d4 + d6 + d8 + d10;
  result = 9 - ((((s1 * 3) + s2) - 1) % 10);
  printf( "Check digit: %d\n", result );
  return EXIT_SUCCESS;
}
