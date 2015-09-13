#include <stdio.h>
#define NUM_ELEMENTS 5
#define NUM_DIMENSIONS 2

int main( void )
{
  int i, j;

  /*
  sample data to check sums because it's tedious to input manually

  old:

  int numbers[ NUM_ELEMENTS ][ NUM_ELEMENTS ] = {};
  */

  int numbers[ NUM_ELEMENTS ][ NUM_ELEMENTS ]={
    {8,3,9,0,10},
    {3,5,17,1,1},
    {2,8,6,23,1},
    {15,7,3,2,9},
    {6,14,2,6,0},
  };

  // initialize totals to 0
  int totals[ NUM_DIMENSIONS ][ NUM_ELEMENTS ] = {};

  for (i = 0; i < NUM_ELEMENTS; i++)
  {
    /*
      using sample data so no prompt
    */
    //printf("Enter row %d: ", i);
    for (j = 0; j < NUM_ELEMENTS; j++)
    {
      /*
        using sample data so no input
      */
      //scanf("%d", &numbers[ i ][ j ]);
      totals[0][ i ] += numbers[ i ][ j ];
      totals[1][ j ] += numbers[ i ][ j ];
    }

  }
  char result_type_string[] = "Row";
  for ( i = 0; i < NUM_DIMENSIONS; i++ )
  {
    if ( i == 1 )
      printf("Column totals: \n");
    else
      printf("Row totals: \n");
    for ( j = 0; j < NUM_ELEMENTS; j++ )
    {
      printf("%d ", totals[i][j]);
    }
    printf("\n");

  }

  return 0;
}
