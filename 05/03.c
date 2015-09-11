#include <stdio.h>
#define EXIT_SUCCESS 0

int main( void )
{
  int number_of_shares, price_per_share, value_of_shares;
  double commission_own, commission_rival;
  printf("Enter the number of shares and price per share: ( such as 4, $200 ) ");
  scanf("%d, $%d", &number_of_shares, &price_per_share );
  value_of_shares = number_of_shares * price_per_share;
  if ( value_of_shares < 2500 ){
    commission_own = 30 + .0017f * value_of_shares;
    if ( commission_own < 39 ){ /* minimum commission only checked for this case */
      commission_own = 39.0f;
    }
  } else if ( value_of_shares >= 2500 && value_of_shares < 6250 ){
    commission_own = 56 + .00066f * value_of_shares;
  } else if ( value_of_shares >= 6250 && value_of_shares < 20000 ){
    commission_own = 76 + .00034f * value_of_shares;
  } else if ( value_of_shares >=  20000 && value_of_shares < 50000 ){
    commission_own = 100 + .00022f * value_of_shares;
  } else if ( value_of_shares >= 50000 && value_of_shares < 500000 ){
    commission_own = 155 + .00011f * value_of_shares;
  } else if ( value_of_shares >= 500000 ){
    commission_own = 255 + .00009f * value_of_shares;
  }
  if ( number_of_shares < 2000 ){
    commission_rival = 33 + .03f * number_of_shares;
  } else if ( number_of_shares >= 2000 ){
    commission_rival = 33 + .02f * number_of_shares;
  }

  printf("Own commission\tRival commission\n"\
         "%-8.2f\t%-8.2f\n", commission_own, commission_rival );

  return EXIT_SUCCESS;
}

/*
transaction_size  commission_rate
< 2500            30  + 1.7%
2500-6250         56  + 0.66%
6250-20000        76  + 0.34%
20000-50000       100 + 0.22%
50000-500000      155 + 0.11%
> 500000          255 + 0.09%

minimum charge is 39
*/
