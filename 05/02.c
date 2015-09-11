#include <stdio.h>

#define EXIT_SUCCESS 0

int main( void )
{
  int hours, minutes;
  printf("Enter 24-hour time: ");
  scanf("%2d:%2d", &hours, &minutes);

  if ( hours > 12 ){
    printf( "Equivalent 12-hour time: %1d:%.2d PM", hours - 12, minutes);
  } else if ( hours >= 0 && hours <= 12 ){
    printf( "Equivalent 12-hour time: %1d:%.2d AM", hours, minutes);
  }

  return EXIT_SUCCESS;
}
