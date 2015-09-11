#include <stdio.h>
#include <math.h>

#define EXIT_SUCCESS 0

int main( void )
{
  int number;
  printf("Enter a number to reverse: ");
  scanf("%d", &number);

  do
  {
    printf("%d", number % 10);
    number /= 10;
  }
  while ( number != 0 );

  return EXIT_SUCCESS;
}
