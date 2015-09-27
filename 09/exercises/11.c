#include <stdio.h>
#include <ctype.h>

float compute_GPA( char grades[], int n)
{
  int i, sum = 0;
  for ( i = 0; i < n; i++)
  {
    // leave the error checking at that
    grades[i] = toupper(grades[i]);

    // exploit the fact that the character values happen to follow one another
    // in the ASCII table
    // except 'F' but it can be ignored because it does not add to the sum
    if (grades[i] != 'F'){
      sum += -grades[i] + 'A' + 4;
      //printf("Grades[%d] is %c, the result %d\n", i, grades[i], -grades[i] + 'A' + 4 );
    }

  }
  return (double)sum / n;
}

int main( void )
{
  printf("The GPA is %.3f",
    compute_GPA( (char[]){'f','B','A','A', 'F'}, 5)
  ); // returns 2.200f

  return 0;
}
