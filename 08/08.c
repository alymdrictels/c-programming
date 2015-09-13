#include <stdio.h>
#define NUM_ELEMENTS 5
#define NUM_DATA 5

// some superfluous shorthand because it did not look nice
#define ELEM numbers[i][j]

// defining result type subarrays
#define STUD_AVG 0
#define QUIZ_AVG 1
#define STUD_TOT 2
#define GRAD_HIGH 3
#define GRAD_LOW 4

int main( void )
{
  int i, j;

  double numbers[ NUM_ELEMENTS ][ NUM_ELEMENTS ]={
    {8.0f,3.0f,9.0f,0.0f,10.0f},
    {3.0f,5.0f,17.0f,1.0f,1.0f},
    {2.0f,8.0f,6.0f,23.0f,1.0f},
    {15.0f,7.0f,3.0f,2.0f,9.0f},
    {6.0f,14.0f,2.0f,6.0f,0.0f},
  };

  double totals[ NUM_DATA ][ NUM_ELEMENTS ] = {};

  for (i = 0; i < NUM_ELEMENTS; i++)
  {
    //printf("Enter grades for student %d: ", i);
    for (j = 0; j < NUM_ELEMENTS; j++)
    {
      //scanf("%d", &numbers[ i ][ j ]);
      totals[STUD_AVG][ i ] += ELEM / (double)NUM_ELEMENTS;
      totals[QUIZ_AVG][ j ] += ELEM / (double)NUM_ELEMENTS;
      totals[STUD_TOT][ i ] += ELEM;
      if ( totals[GRAD_LOW][ 0 ] > ELEM)
        totals[GRAD_LOW][ 0 ] = ELEM;
      if ( totals[GRAD_HIGH][ 0 ] < ELEM )
        totals[GRAD_HIGH][ 0 ] = ELEM;
    }
  }
  for ( i = 0; i < NUM_DATA; i++ )
  {
    switch (i){
      case STUD_AVG:
        printf("Student averages: \n");
        break;
      case QUIZ_AVG:
        printf("Quiz averages: \n");
        break;
      case STUD_TOT:
        printf("Student totals: \n");
        break;
      case GRAD_HIGH:
        printf("Highest grade: \n");
        break;
      case GRAD_LOW:
        printf("Lowest grade: \n");
        break;
    }

    for ( j = 0; ; j++ )
    {
      // the first three results terminate at NUM_ELEMENTS
      // the last two terminate at a single value
      if ( i >= STUD_AVG && i <= STUD_TOT && j >= NUM_ELEMENTS ){
        break;
      }
      if ( (i == GRAD_HIGH ||  i == GRAD_LOW) && j > 0){
        break;
      }
      printf("%4.2f\t", totals[i][j]);

    }
    printf("\n");
  }

  return 0;
}
