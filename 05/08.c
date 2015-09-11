#include <stdio.h>

#define EXIT_SUCCESS 0
#define HOURS 60
#define MINUTES 1

int main( void )
{
  int hours, minutes, mins_since_midnight;
  int dt1, dt2, dt3, dt4, dt5, dt6, dt7, dt8;
  dt1 = 8 * HOURS + 0 * MINUTES;
  dt2 = 9 * HOURS + 43 * MINUTES;
  dt3 = 11 * HOURS + 19 * MINUTES;
  dt4 = 12 * HOURS + 47 * MINUTES;
  dt5 = 14 * HOURS + 0 * MINUTES;
  dt6 = 15 * HOURS + 45 * MINUTES;
  dt7 = 19 * HOURS + 0 * MINUTES;
  dt8 = 21 * HOURS + 45 * MINUTES;

  printf("Enter a 24-hour time: ");
  scanf("%2d:%2d", &hours, &minutes);
  mins_since_midnight = hours * 60 + minutes;

  if ( mins_since_midnight <= (dt1 + dt2) / 2){
    printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
  } else if ( mins_since_midnight <= (dt2 + dt3) / 2){
    printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
  } else if ( mins_since_midnight <= (dt3 + dt4) / 2){
    printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
  } else if ( mins_since_midnight <= (dt4 + dt5) / 2){
    printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
  } else if ( mins_since_midnight <= (dt5 + dt6) / 2){
    printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
  } else if ( mins_since_midnight <= ((dt6 + dt7) / 2)){
    printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
  } else if ( mins_since_midnight <= ((dt7 + dt8) / 2)){
    printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
  } else {
    printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
  }
  return EXIT_SUCCESS;
}
