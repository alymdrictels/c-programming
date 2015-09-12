#include <stdio.h>

#define ARRAY_ELEMENT_COUNT(x) (sizeof (x) / sizeof (x)[0])

int main( void )
{
  int fib_numbers[40] = {0, 1};
  int i;
  int array_length = ARRAY_ELEMENT_COUNT(fib_numbers);

  // skip the first two numbers
  for ( i = 2; i <= array_length; i++)
  {
    // potentially dangerous index decrement but we have
    // well-defined boundaries
    fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];

    printf("Fibonacci number %d is %d\n", i, fib_numbers[i]);
  }

  return 0;
}
