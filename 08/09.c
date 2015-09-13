#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARR_SIZE 11

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define NO_DIRECTIONS 4

int main( void )
{
  srand((unsigned) time(NULL));

  char field[ARR_SIZE][ARR_SIZE] = {};
  short x, y;

  for ( y = 0; y < ARR_SIZE; y++)
  {
    for ( x = 0; x < ARR_SIZE; x++)
    {
      field[y][x] = '.';
    }
  }
  char letter = 'A';

  short move, i, count = 0;
  int move_is_possible[NO_DIRECTIONS] = {false};

  for (y = 1, x = 1; ;)
  {
    if (letter >= 'Z') break;

    // initialize bool array to false in each iteration
    for (i = 0; i < NO_DIRECTIONS; i++)
    {
      move_is_possible[i] = false;
    }

    // the array has extra fields for simpler boundary checking
    // only the 'inner' fields are displayed in the printout
    if ( y - 1 > 0 && field[y-1][x] == '.' )
      move_is_possible[UP] = true;
    if ( y + 1 < ARR_SIZE - 1 && field[y+1][x] == '.')
      move_is_possible[DOWN] = true;
    if ( x - 1 > 0  && field[y][x-1] == '.')
     move_is_possible[LEFT] = true;
    if ( x + 1 < ARR_SIZE - 1  && field[y][x+1] == '.')
     move_is_possible[RIGHT] = true;

    if (
      move_is_possible[UP] == false
      &&
      move_is_possible[DOWN] == false
      &&
      move_is_possible[LEFT] == false
      &&
      move_is_possible[RIGHT] == false
    )
    {
      printf("Stuck before execution could finish!\n");
      break;
    }

    do
    {
      move = rand() % 4;
    }
    while ( move_is_possible[ move ] != true);


    switch (move)
    {
      case UP:
        y--;
        break;
      case DOWN:
        y++;
        break;
      case LEFT:
        x--;
        break;
      case RIGHT:
        x++;
        break;
    }
    field[y][x] = letter++;
  }

  for ( y = 1; y < ARR_SIZE - 1; y++)
  {
    for ( x = 1; x < ARR_SIZE - 1; x++)
    {
      printf("%c ", field[y][x]);
    }
    printf("\n");
  }

  return 0;
}
