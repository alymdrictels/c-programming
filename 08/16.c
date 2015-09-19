#include <stdio.h>
#include <ctype.h>

int main( void )
{
  int chars_appeared[26] = {};

  // assume words are anagrams
  int anagrams = 1;

  char c;

  printf("Enter first word: ");
  while ( (c = getchar()) != '\n')
  {
    if ( isalpha(c) )
    {
      c = tolower( c );
      chars_appeared[ c - 'a']++;
    }
  }
  printf("Enter second word: ");

  while ( (c = getchar()) != '\n')
  {
    if ( isalpha(c) )
    {
      c = tolower( c );
      chars_appeared[ c - 'a']--;
    }
  }

  int i;

  for ( i = 0; i < 26; i++)
  {
    if ( chars_appeared[i] > 0)
    {
      anagrams = 0;
      break;
    }
  }
  // "empty" strings introduce whitespace
  printf("The words are%s anagrams.", anagrams ? "" : " not");

  return 0;
}
