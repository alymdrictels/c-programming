#include <stdio.h>

#define NO_DIGITS 10

int main( void )
{
  short digit_seen[NO_DIGITS] = {0};
  int digit, i, repeated_exist_flag = 0;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while ( n > 0 )
  {
    digit = n % 10;
    digit_seen[ digit ]++;
    n /= 10;
  }
  printf("Repeated digit(s): ");
  for ( i = 0; i < NO_DIGITS; i++)
  {
    if ( digit_seen[ i ] > 1 )
    {
      printf("%d ", i);
      repeated_exist_flag = 1;
    }
  }
  if ( !repeated_exist_flag )
  {
    printf("none");
  }


  return 0;
}


/*

#include <stdio.h>
#include <stdbool.h>

// original repdigit.c

int main( void )
{
  bool digit_seen[10] = {false};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while ( n > 0 )
  {
    digit = n % 10;
    if ( digit_seen[ digit ] )
    {
      break;
    }
    digit_seen[ digit ] = true;
    n /= 10;
  }
  if ( n > 0 )
  {
    printf("Repeated digit\n");
  }
  else
  {
    printf("No repeated digit\n");
  }

  return 0;
}
*/
