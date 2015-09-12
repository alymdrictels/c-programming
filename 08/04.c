#include <stdio.h>

#define N 10
#define ARRAY_ELEMENT_COUNT(n) (sizeof(n) / sizeof(n)[0])

int main( void )
{
  int a[N], i;

  printf("Enter %d numbers: ", N);

  for ( i = 0; i < ARRAY_ELEMENT_COUNT(a); i++ )
  {
    scanf( "%d", &a[i] );
  }
  printf("In reverse order:");
  for ( i = ARRAY_ELEMENT_COUNT(a) - 1; i >= 0; i--)
  {
    printf(" %d", a[i]);
  }

  return 0;
}

