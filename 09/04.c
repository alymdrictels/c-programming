#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main( void )
{
  int counts1[26] = {};
  int counts2[26] = {};

  read_word( counts1 );
  read_word( counts2 );

  // "empty" strings introduce whitespace
  printf("The words are%s anagrams.", equal_array(counts1, counts2) ? "" : " not");

  return 0;
}


void read_word(int counts[26])
{
  // counts how many times the function was called
  static function_called = 1;

  char c;

  printf("Enter word %d: ", function_called);

  while ( (c = getchar()) != '\n')
  {
    if ( isalpha(c) )
    {
      c = tolower( c );
      counts[ c - 'a']++;
    }
  }
}

bool equal_array(int counts1[26], int counts2[26])
{
  int i;

  for ( i = 0; i < 26; i++)
  {
    if ( counts1[i] != counts2[i])
    {
      return false;
    }
  }
  return true;
}
