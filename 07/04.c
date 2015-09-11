#include <stdio.h>

#define EXIT_SUCCESS 0

int main( void )
{
  char num;

  printf("Enter phone number: ");
  do
  {
    num = getchar();
    switch (num)
    {
      default:
        printf("%c", num);
        break;
      case 'A':
      case 'B':
      case 'C':
        printf("2");
        break;
      case 'D':
      case 'E':
      case 'F':
        printf("3");
        break;
      case 'G':
      case 'H':
      case 'I':
        printf("4");
        break;
      case 'J':
      case 'K':
      case 'L':
        printf("5");
        break;
      case 'M':
      case 'N':
      case 'O':
        printf("6");
        break;
      case 'P':
      case 'R':
      case 'S':
        printf("7");
        break;
      case 'T':
      case 'U':
      case 'V':
        printf("8");
        break;
      case 'W':
      case 'X':
      case 'Y':
        printf("9");
        break;
    }
  }
  while ( num != '\n' );

  return EXIT_SUCCESS;
}
