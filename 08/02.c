#include <stdio.h>

#define NO_DIGITS 10

int main( void )
{
  short digit_seen[NO_DIGITS] = {};
  int digit, i;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while ( n > 0 )
  {
    digit = n % 10;
    digit_seen[ digit ]++;
    n /= 10;
  }
  printf("Digits:\t\t");
  for ( i = 0; i < NO_DIGITS; i++)
  {
    printf("%3d", i);
  }
  printf("\n");
  // not sure how to avoid two loops here without resorting to arcane secrets
  printf("Occurrences:\t");
  for ( i = 0; i < NO_DIGITS; i++)
  {
    printf("%3d", digit_seen[i]);
  }

  return 0;
}

