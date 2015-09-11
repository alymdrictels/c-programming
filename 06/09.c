#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define MONTLY_INTEREST_FACTOR 100.00f / 12.0f
#define MAX_CHARS 10

double remaining_balance( double amount, double interest_rate, double monthly_payment, int i );

/*
    This is basically the same as chapter 2 project 8
    due to already implementing a variable number of iterations.
    Deleted the ordinal number map, however. Too unsightly.
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

    printf("Balance remaining after payment %d: $%.2f\n", ++counter, new_balance);

    return remaining_balance( new_balance, interest_rate, monthly_payment, --i );
}


