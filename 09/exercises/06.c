#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int digit();

int main( void )
{
  printf("Enter a positive number, and a digit position: ");
  int number, position;

  scanf("%d %d", &number, &position);

  printf("The digit in position %d is %d", position, digit(number, position));

  return EXIT_SUCCESS;
}

int digit(int number, int position)
{
  // the funky bracing is supposed to increase readability
  // just wanted to jam everything into the for
  int digit;
  for ( ;
    position > 0;
    position--,
    digit = number % 10,
    number /= 10
  ){
    if ( number == 0 ) return 0;
  }
  return digit;
}
