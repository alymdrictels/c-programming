#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  printf("Enter a sentence: ");
  int c, words = 0, word_length = 0, total_word_length = 0;
  double avg_word_length;

  while ( c = getchar() )
  {
    if ( c == '\t' || c == '\ ' || c == '\n' )
    {
      total_word_length += word_length;
      word_length = 0;
      ++words;
      if ( c == '\n') break;
    }
    else
    {
      ++word_length;
    }
  }
  printf("Total word length: %d -> Total number of words: %d\n", total_word_length, words);
  avg_word_length = (double) total_word_length / words;

  printf("Average word length: %.1f", avg_word_length);

  return 0;
}
