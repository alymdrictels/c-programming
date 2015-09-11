#include <stdio.h>
#include <math.h>

#define EXIT_SUCCESS 0

int main( void )
{
  double taxable_income, tax;

  printf("Enter the amount of taxable income: ");
  scanf("%lf", &taxable_income );

  if ( taxable_income < 750.00f ){
    tax = taxable_income * .01f;
  } else if ( taxable_income < 2250.00f ){
    tax = 7.5f + (taxable_income - 750.00f) * .02f;
  } else if ( taxable_income < 3750.00f ){
    tax = 37.5f + (taxable_income - 2250.00f) * .03f;
  } else if ( taxable_income < 5250.00f ){
    tax = 82.5f + (taxable_income - 3750.00f) * .04f;
  } else if ( taxable_income < 7000.00f ){
    tax = 142.5f + (taxable_income - 5250.00f) * .05f;
  } else if ( taxable_income >= 7000.00f ){
    tax = 230.0f + (taxable_income - 7000.00f) * .06f;
  }
  printf("Due tax is: %.2f", tax);
  return EXIT_SUCCESS;
}
