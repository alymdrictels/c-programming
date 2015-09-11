#include <stdio.h>
#include <ctype.h>

#define EXIT_SUCCESS 0

int main( void )
{
  char letter;
  int sum = 0;

  printf("Enter a word: ");
  do
  {
    letter = toupper(getchar());
    switch (letter)
    {
      case 'A': case 'E': case 'I': case 'L': case 'N':
      case 'O': case 'R': case 'S': case 'T': case 'U':
        sum += 1;
        break;
      case 'D': case 'G':
        sum += 2;
        break;
      case 'B': case 'C': case 'M': case 'P':
        sum += 3;
        break;
      case 'F': case 'H': case 'W': case 'V': case 'Y':
        sum += 4;
        break;
      case 'K':
        sum += 5;
        break;
      case 'J': case 'X':
        sum += 8;
        break;
      case 'Q': case 'Z':
        sum += 10;
        break;
    }
  }
  while ( letter != '\n' );

  printf("Scrabble value: %d", sum);

  return EXIT_SUCCESS;
}
