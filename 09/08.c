#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);

int main( void )
{
  unsigned int seed = time( NULL );
  srand(seed);
  printf( "You rolled: %d\n", roll_dice() );

  int wins = 0, losses = 0;
  bool result;
  char c;

  for (;;)
  {

    result = play_game();
    if ( result == true){
      wins++;
      printf("You won!\n");
    } else {
      losses++;
      printf("You lose!\n");
    }
    printf("Play again?\n");

    // skip whitespace. another solution is to use scanf with whitespace skipping
    do
    {
      c = getchar();
    } while (isspace(c));

    c = toupper( c );

    if (c != 'Y') break;
  };
  printf("\nWins: %2d\tLosses: %2d\n", wins, losses);

  return 0;
}

int roll_dice(void){
  return (rand() % 6 + 1) + (rand() % 6 + 1);
}

bool play_game(void){
  int point, roll = roll_dice();
  printf("You rolled: %d\n", roll);

  if ( roll == 7 || roll == 11) return true;
  if ( roll == 2 || roll == 3 || roll == 12) return false;
  point = roll;
  printf("Your point is: %d\n", point);
  for(;;)
  {
    roll = roll_dice();
    printf("You rolled: %d\n", roll);
    if ( roll == point ) return true;
    else if ( roll == 7) return false;
  }
}
