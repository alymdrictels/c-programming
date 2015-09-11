#include <stdio.h>
#include <math.h>

#define EXIT_SUCCESS 0
#define MAX_FIELDS 16
#define MAX_ROW 4
#define MAX_COLUMN 4

int main( void )
{
  int x0y0, x0y1, x0y2, x0y3;
  int x1y0, x1c2, x1y2, x1y3;
  int x2y0, x2c2, x2y2, x2y3;
  int x3y0, x3c2, x3y2, x3y3;

  printf("Enter the numbers from 1 to 16 in any order:\n");
  scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",\
      &x0y0, &x0y1, &x0y2, &x0y3, \
      &x1y0, &x1c2, &x1y2, &x1y3, \
      &x2y0, &x2c2, &x2y2, &x2y3, \
      &x3y0, &x3c2, &x3y2, &x3y3);

  printf("%2d\t%2d\t%2d\t%2d\n", x0y0, x0y1, x0y2, x0y3);
  printf("%2d\t%2d\t%2d\t%2d\n", x1y0, x1c2, x1y2, x1y3);
  printf("%2d\t%2d\t%2d\t%2d\n", x2y0, x2c2, x2y2, x2y3);
  printf("%2d\t%2d\t%2d\t%2d\n", x3y0, x3c2, x3y2, x3y3);

  printf("Row sums: %2d  %2d  %2d  %2d\n", \
      x0y0 + x0y1 + x0y2 + x0y3, \
      x1y0 + x1c2 + x1y2 + x1y3, \
      x2y0 + x2c2 + x2y2 + x2y3, \
      x3y0 + x3c2 + x3y2 + x3y3);
  printf("Column sums: %2d  %2d  %2d  %2d\n", \
      x0y0 + x1y0 + x2y0 + x3y0, \
      x0y1 + x1c2 + x2c2 + x3c2, \
      x0y2 + x1y2 + x2y2 + x3y2, \
      x0y3 + x1y3 + x2y3 + x3y3);

  printf("Diagonal sums: %2d  %2d\n", \
      x0y0 + x1c2 + x2y2 + x3y3, \
      x3y0 + x2c2 + x1y2 + x0y3);

  return EXIT_SUCCESS;
}
