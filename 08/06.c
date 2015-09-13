#include <stdlib.h>
#include <stdio.h>

#define TO_UPPER(letter) (letter + 'A' - 'a')
#define BUFFER_MAX_SIZE 256

int main( void )
{
  int seed = time(NULL);
  int no_of_exclamation_marks;
  srand(seed);

  short c, i, string_length = 0;

  char buffer[BUFFER_MAX_SIZE];

  printf("Enter message: ");

  while ( (c = getchar()) != '\n' )
  {
    buffer[string_length++] = c;
  }
  buffer[string_length] = '\0';

  // could have been converted on the fly but it was explicitly
  // required to save the array prior
  for (i = 0; i < string_length; i++)
  {
    if (buffer[i] >= 'a' && buffer[i] <= 'z')
    {
      buffer[i] = TO_UPPER(buffer[i]);
      switch ( buffer[i] )
      {
        case 'A':
          buffer[i] = '4';
          break;
        case 'B':
          buffer[i] = '8';
          break;
        case 'I':
          buffer[i] = '1';
          break;
        case 'T':
          buffer[i] = '7';
          break;
        case 'S':
          buffer[i] = '5';
          break;
        case 'O':
          buffer[i] = '0';
          break;
        case 'E':
          buffer[i] = '3';
          break;
      }
    }
  }

  // the problem said "10 or so exclamation marks"
  // so this deals with the "or so" ;D
  no_of_exclamation_marks = 10 + rand() % 5;

  for (i = 0; i < no_of_exclamation_marks; i++)
  {
    buffer[ string_length + i ] = '!';
  }

  buffer[ string_length + i ] = '\0';
  printf("\n%s", buffer);

  return 0;
}
