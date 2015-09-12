#include <stdio.h>

#define HOUR_MAX 29
#define DAY_MAX 23
#define TEMPERATURE_UNIT "celsius"

// need some sample input, have not tested

int main( void )
{
  int temperature_readings[DAY_MAX][HOUR_MAX] = {0};
  int i, j, number_of_readings = DAY_MAX * HOUR_MAX;

  double sum = 0.0f;

  for ( i = 0; i <= DAY_MAX; i++ )
  {
    for ( j = 0; j <= HOUR_MAX; j++ )
    {
      // implicit cast
      sum += temperature_readings[ i ][ j ];
    }
  }

  printf("The average is: %.3f %s", sum / (double)number_of_readings, TEMPERATURE_UNIT);
  return 0;
}
