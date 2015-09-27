#include <stdio.h>


int fact( int n )
{
  int fact;
  for ( fact = 1; n > 0; n--)
    fact *= n;
  return fact;
}

int main(void)
{
  int number = 5;
  printf("The factorial of is %d is %d", number, fact(number));

  return 0;
}
