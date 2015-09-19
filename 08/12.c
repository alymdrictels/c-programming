#include <stdio.h>
#include <ctype.h>

#define EXIT_SUCCESS 0

int main( void )
{
  char letter;
  int sum = 0;

  const int scrabble_values[26] = {
    1, 3, 3, 2, 1, 4, 2, 4, // A-H
    1, 8, 5, 1, 3, 1, 1, 3, // I-P
    10,1, 1, 1, 1, 4, 4, 8, // Q-X
    4, 10                   // Y-Z
  };

  printf("Enter a word: ");
  for (;;)
  {
    letter = getchar();
    if (letter == '\n') break;
    letter = toupper(letter);

    sum += scrabble_values[letter - 'A'];
  }

  printf("Scrabble value: %d", sum);

  return EXIT_SUCCESS;
}
