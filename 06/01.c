#include <stdio.h>

#define EXIT_SUCCESS 0

int main( void )
{
  double entered_number, largest_number;
  largest_number = 0;
  do
  {
    printf("Enter a number: ");
    scanf("%lf", &entered_number);

    if ( entered_number > largest_number )
    {
      largest_number = entered_number;
    }
  }
  while ( entered_number > 0 );

  printf("The largest number entered was %f", largest_number);

  return EXIT_SUCCESS;
}
