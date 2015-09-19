#include <stdio.h>

#define MAX_LENGTH 255
#define UNDEFINED -1
#define SPACE '\ '

/*
  quite aware this is terrible but it works
  catching all the possible edge cases
  (multiple terminators come to mind)
  would not be a productive use of time
*/
int main( void )
{
  printf("Enter a sentence: ");
  char sentence[MAX_LENGTH];
  char c, terminator = UNDEFINED;
  int i, max_length;

  // store the sentence
  for ( i = 0; c != '\n'; i++)
  {
    c = getchar();
    if ( c == '!' || c == '?' || c == '.')
    {
      terminator = c;
    }
    else
    {
      sentence[i] = c;
    }
  }
  sentence[i] = '\0';

  printf("Reversal of sentence:");

  max_length = i - 1;

  int last_word_index, current_word_index;
  int j;

  last_word_index = max_length;

  if ( terminator != UNDEFINED)
  --last_word_index;

  // traverse the sentence backwards
  for ( i = max_length; i >= 0; i-- )
  {
    if ( sentence[i] == SPACE || i == 0)
    {
      current_word_index = i;
      if (i == 0) putchar( SPACE );

      /*
        prints the word starting from the first space found
        and ending on the previous last word end

        in the first iteration, the last word can end
        at max length or max length - 1, depending on
        whether the sentence is terminated
      */
      for ( j = current_word_index; j < last_word_index; j++)
      {
        putchar( sentence[j] );
      }

      last_word_index = current_word_index;
    }
  }
  if ( terminator != UNDEFINED)
    putchar( terminator );

  return 0;
}
