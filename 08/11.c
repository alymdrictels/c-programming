#include <stdio.h>

#define EXIT_SUCCESS 0

int main( void )
{
  char num;
  char converted[15];
  int i = 0;

  printf("Enter phone number: ");
  do
  {
    num = getchar();
    switch (num)
    {
      default:
        converted[i] = num;
        break;
      case 'A':
      case 'B':
      case 'C':
        converted[i] = '2';
        break;
      case 'D':
      case 'E':
      case 'F':
        converted[i] = '3';
        break;
      case 'G':
      case 'H':
      case 'I':
        converted[i] = '4';
        break;
      case 'J':
      case 'K':
      case 'L':
        converted[i] = '5';
        break;
      case 'M':
      case 'N':
      case 'O':
        converted[i] = '6';
        break;
      case 'P':
      case 'R':
      case 'S':
        converted[i] = '7';
        break;
      case 'T':
      case 'U':
      case 'V':
        converted[i] = '8';
        break;
      case 'W':
      case 'X':
      case 'Y':
        converted[i] = '9';
        break;
    }
    // could have put this incrementation in each case instead
    ++i;
  }
  while ( num != '\n' );

  converted[i] = '\0';

  printf("In numeric form: %s", converted);

  return EXIT_SUCCESS;
}
