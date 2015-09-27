#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1


// omitting argument declarations just for the fun of it
// would otherwise list them
int day_of_year();
int is_leap_year();

int main( void )
{
  printf("Enter a day/month/year (ex. \"29/11/1995\"): ");

  int day, month, year;

  scanf( "%d/%d/%d", &day, &month, &year);

  printf("Days elapsed: %d", day_of_year( day, month, year));

  return 0;
}

int day_of_year(int day, int month, int year)
{
  if ( day <= 0 || day > 31) exit(EXIT_FAILURE);

  // check that the day is within the bounds of the particular month
  // give up in frustration if anything is wrong
  //
  // day > 31 is already checked, so we can omit the remaining cases
  switch (month)
  {
    case 2:
    if (is_leap_year(year) ? day > 29 : day > 28)
      exit(EXIT_FAILURE);
    break;
    case 4:
    case 6:
    case 9:
    case 11:
      if ( day > 30 )
        exit(EXIT_FAILURE);
    break;
  }

  int i, days = 0;

  int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  for (i = 1; i < month; i++)
    days += days_in_month[i-1];

  if (is_leap_year(year) && month > 2)
    days++;

  return days;
}

int is_leap_year(int year)
{
    if ( (year % 4 != 0) || ( year % 400 != 0))
        return 0;
    else if ( year % 100 != 0)
        return 1;
    return 1;
}
