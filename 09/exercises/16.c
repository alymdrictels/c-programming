#include <stdio.h>


int fact( int n )
{
  return (n <= 1) ? 1 : n * fact( n - 1 );
}

int main(void)
{
  int number = 5;
  printf("The factorial of is %d is %d", number, fact(number));

  return 0;
}
