#include <stdio.h>
#include <stdbool.h>

#define EXIT_SUCCESS 0

int main( void )
{
  double knots;

  printf("Enter the wind speed in knots: ");
  scanf("%lf", &knots);
  printf("According to the Beaufort scale, the wind status is: ");

  /*
  living on the edge with no brackets in between the conditionals

  born to be wild
  */
  if ( knots < 1 )
    printf("Calm");
  else if ( knots <= 3 )
    printf("Light air");
  else if ( knots <= 27 )
    printf("Breeze");
  else if ( knots <= 47 )
    printf("Gale");
  else if ( knots <= 63 )
    printf("Storm");
  else if ( knots > 63 )
    printf("Hurricane");

  printf("\n");
  return EXIT_SUCCESS;
}
