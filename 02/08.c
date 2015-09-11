#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define MONTLY_INTEREST_FACTOR 100.00f / 12.0f
#define MAX_CHARS 10

double remaining_balance( double amount, double interest_rate, double monthly_payment, int i );
const char * ordinal_number_map( int number );

/*
    I went a little overboard with this one but it was fun.
    As all other examples so far, it doesn't give a rat's ass about safety.
*/

int main( void )
{
  double amount, interest_rate, monthly_payment;
  int i = 0;
  printf("Enter amount of loan: ");
  scanf("%lf", &amount);
  printf("Enter interest rate: ");
  scanf("%lf", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%lf", &monthly_payment);
  printf("Enter how many months: ");
  scanf("%d", &i);

  remaining_balance( amount, interest_rate, monthly_payment, i);
  return EXIT_SUCCESS;
}
double remaining_balance( double amount, double interest_rate, double monthly_payment, int i )
{
    static counter = 0;

    if ( 0 == i )
    {
      return amount;
    }

    double new_balance = amount - monthly_payment + (amount * interest_rate / MONTLY_INTEREST_FACTOR);

    printf("Balance remaining after %s payment: $%.2f\n", ordinal_number_map(++counter), new_balance);

    return remaining_balance( new_balance, interest_rate, monthly_payment, --i );
}
const char * ordinal_number_map( int number )
{
  char buffer[20];

  switch (number)
  {
    case 1:
        return "first";
        break;
    case 2:
        return "second";
        break;
    case 3:
        return "third";
        break;
    case 4:
        return "fourth";
        break;
    case 5:
        return "fifth";
        break;
    case 6:
        return "sixth";
        break;
    case 7:
        return "seventh";
        break;
    case 8:
        return "eighth";
        break;
    case 9:
        return "nineth";
        break;
    case 10:
        return "tenth";
        break;
    case 11:
        return "eleventh";
        break;
    case 12:
        return "twelfth";
        break;
    default:
        itoa(number, buffer, 10);
        return buffer;
        break;
  }
}
