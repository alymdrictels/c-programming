#include <stdio.h>

#define EXIT_SUCCESS 0
#define HOURS 60
#define MINUTES 1
#define NO_TRIPS 8
#define departure_times(i) (departure_arrival_times[i][0])
#define arrival_times(i) (departure_arrival_times[i][1])

int main( void )
{
  const char am[] = "a.m.";
  const char pm[] = "p.m.";
  int hours, minutes, mins_since_midnight;
  int departure_arrival_times[NO_TRIPS][2] = {
    {8 * HOURS + 0 * MINUTES, 10 * HOURS + 16 * MINUTES},
    {9 * HOURS + 43 * MINUTES, 11 * HOURS + 52 * MINUTES},
    {11 * HOURS + 19 * MINUTES, 13 * HOURS + 31 * MINUTES},
    {12 * HOURS + 47 * MINUTES, 15 * HOURS + 0 * MINUTES},
    {14 * HOURS + 0 * MINUTES, 16 * HOURS + 8 * MINUTES},
    {15 * HOURS + 45 * MINUTES, 17 * HOURS + 55 * MINUTES},
    {19 * HOURS + 0 * MINUTES, 21 * HOURS + 20 * MINUTES},
    {21 * HOURS + 45 * MINUTES, 23 * HOURS + 58 * MINUTES},
  };

  printf("Enter a 24-hour time: ");
  scanf("%2d:%2d", &hours, &minutes);
  mins_since_midnight = hours * 60 + minutes;

  int i, dep_hours, dep_minutes, arr_hours, arr_minutes;

  for ( i = 0; i <= NO_TRIPS; i++ )
  {
    if ( mins_since_midnight <= (departure_times(i) + departure_times(i + 1)) / 2)
    {
      dep_hours = departure_times(i) / 60;
      dep_minutes = departure_times(i) % 60;

      arr_hours = arrival_times(i) / 60;
      arr_minutes = arrival_times(i) % 60;

      printf("Closest departure time is %.2d:%.2d %s, "\
             "arriving at %.2d:%.2d %s", \
             dep_hours, dep_minutes, (dep_hours >= 12) ? pm : am, \
             arr_hours, arr_minutes, (arr_hours >= 12) ? pm : am);
      break;
    }
  }

  return EXIT_SUCCESS;
}
