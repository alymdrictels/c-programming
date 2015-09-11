#include <stdio.h>
#define EXIT_SUCCESS 0

/*
  combined this one with ch 5 project 4 instead
*/

int main( void )
{
  int number_of_shares, price_per_share, value_of_shares;
  double commission_own, commission_rival;
  for (;;)
  {
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
    if ( value_of_shares == 0 ) break;
    printf("Own commission\tRival commission\n"\
           "%-8.2f\t%-8.2f\n", commission_own, commission_rival );
  };
  end:;
  return EXIT_SUCCESS;
}
