#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBER 256

int main( void )
{
  float result = 0.0f;
  printf("Enter an expression: ");
  int c, last_operator, i;
  char number[ MAX_NUMBER ];

  // in the first iteration, the first number is added to 0
  last_operator = '+';
  for (;;)
  {
    c = getchar();

    if ( c == '+' || c == '-' || c == '*' || c == '/' || c == '\n')
    {
      // once we reach an operator, terminate the 'number' string
      // one character after the last number character is on position "i",
      // because a postfix increment was used in the previous iteration
      // this means we're done adding characters to it
      number[ i ] = '\0';
      i = 0;
      switch ( last_operator )
      {
        case '+':
          result += atof(number);
          break;
        case '-':
          result -= atof(number);
          break;
        case '*':
          result *= atof(number);
          break;
        case '/':
          result /= atof(number);
          break;
      }
      // when the last character is reached, still do the last calculation (switch/case),
      // but we do not care about resetting the number string or assigning '\n' as a last operator
      if ( c == '\n') break;

      last_operator = c;

      // reset the "number" string to be empty so it can restart collecting non-operator characters
      number[0] = '\0';

    }
    else
    {
      // unless the character is an operator, keep filling the number string with characters
      number[ i++ ] = c;
    }
  }

  printf("Value of expression: %.3f", result);

  return 0;
}
// in retrospect, we're not supposed to know about
// arrays until the next chapter. feel free to
// drop a comment if you solved it without resorting to that
