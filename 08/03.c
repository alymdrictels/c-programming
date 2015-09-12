#include <stdio.h>
#include <stdbool.h>

int main( void )
{
  // remove initializer and set to zeroes manually in each iteration
  bool digit_seen[10];
  // use a flag to avoid the problem of n getting to 0
  // with no characters repeated
  bool digit_seen_flag;
  int digit, i;
  long n, original_number;

  do
  {
    for ( i = 0; i < 10; i++)
    {
      digit_seen[ i ] = false;
    }
    digit_seen_flag = false;

    printf("Enter a number: ");
    scanf("%ld", &n);
    original_number = n;

    while ( n > 0 )
    {
      digit = n % 10;
      if ( digit_seen[ digit ] )
      {
        digit_seen_flag = true;
        break;
      }
      digit_seen[ digit ] = true;
      n /= 10;
    }
    if ( digit_seen_flag == true )
    {
      printf("Repeated digit\n");
    }
    else
    {
      printf("No repeated digit\n");
    }
  }
  while ( original_number > 0 );


  return 0;
}

