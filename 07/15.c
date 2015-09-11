#include <stdio.h>
#include <math.h>

int main( void )
{
  double number, guess = 1, oldguess;

  printf("Enter a positive number: ");
  scanf("%lf", &number);

  for (;;)
  {
    oldguess = guess;
    guess = ( guess + number / guess  ) / 2.0f;
    //printf("Current guess is %f\n", guess);
    if ( (double)fabs(guess - oldguess) < guess * 0.00001 ) break;
  }
  printf("Square root: %.5f", guess);


  return 0;
}
