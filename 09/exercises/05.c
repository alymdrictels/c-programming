#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int num_digits();

int main( void )
{
  printf("Enter a positive number: ");
  int number;

  scanf("%d", &number);

  printf("The number %d has %d digits.", number, num_digits(number));

  return EXIT_SUCCESS;
}

// still looking for best practices for error handling
int num_digits(int number)
{
  if (number == 0)
  {
    return 1;
  } else if ( number < 0 )
  {
    printf("Invalid number!");
    exit( EXIT_FAILURE );
  }

  int count;
  while ( number > 0 )
  {
    number /= 10;
    ++count;
  }
  return count;
}
