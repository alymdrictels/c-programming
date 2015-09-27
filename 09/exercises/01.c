#include <stdio.h>

#define SAMPLE_BASE 12.0f
#define SAMPLE_HEIGHT 3.0f

double triangle_area( double base, double height)
{
  double product;

  product = base * height;

  return product / 2;
}



int main( void )
{
  printf("The triangle area of %.3f, height %.3f is:\n%.3f",\
    SAMPLE_BASE,
    SAMPLE_HEIGHT,
    triangle_area( SAMPLE_BASE, SAMPLE_HEIGHT )
  );
  return 0;
}
