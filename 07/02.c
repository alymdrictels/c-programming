#include <stdio.h>

void clearInputBuffer();


int main( void )
{
  long n;
  int i, character;
  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%li", &n);
  cleanInputBuffer();
  for (i = 1; i <= n; i++)
  {
    if ( i  % 24 == 0)
    {
      do
      {
        printf("Press Enter to continue...\n");
      }
      while ( (character = getchar()) != '\n');
      /* behaves quirkily but adheres to spec */
    }
    printf("%10d%10d\n", i, i*i);
  }

  return 0;
}

void clearInputBuffer(){
  do
  {
    c = getchar();
  }
  while (c != '\n' && c != EOF);
}
