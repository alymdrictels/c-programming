#include <stdio.h>

#define NOT_VALID_SIZE (n % 2 != 1 || n < 1 || n > 99)

void create_magic_square( int n, char magic_square[n][n]);
void print_magic_square( int n, char magic_square[n][n]);

int main( void )
{
  printf( "This program creates a magic square of a specified size.\n"\
          "The size must be an odd number between 1 and 99.\n"\
  );

  int n;

  do
  {
    printf("Enter size of magic square: ");
    scanf("%d", &n);
  }
  while ( NOT_VALID_SIZE);

  int square[n][n];
  create_magic_square( n, square );

  // print square
  print_magic_square( n, square );

  return 0;
}

void create_magic_square( int n, char square[n][n])
{
  int i,j;

  // initialize all elements to 0
  for ( i = 0; i < n; i++)
  {
    for ( j = 0; j < n; j++)
    {
      square[i][j] = 0;
    }
  }
  int no = 1;
  i = 0; j = n / 2;
  int new_i, new_j;

  while ( no <= n * n)
  {
    square[i][j] = no++;

    new_i = i;
    new_j = j;

    if (new_i == 0)
      new_i = n;

    new_i--;

    if (new_j ==  n - 1)
    {
      new_j = -1;
    }


    new_j++;

    // only use the new vals if the field is not already taken
    if (square[new_i][new_j] == 0)
    {
      i = new_i;
      j = new_j;
    }
    else
    {
      if (i == n - 1)
      {
        i = -1;
      }
      i++;
    }
  }

}


void print_magic_square( int n, char magic_square[n][n])
{
  int i, j;
  for ( i = 0; i < n; i++)
  {
    for ( j = 0; j < n; j++)
    {
      printf("%3d ", magic_square[i][j]);
    }
    printf("\n");
  }
}
