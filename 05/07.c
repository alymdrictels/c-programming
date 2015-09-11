#include <stdio.h>
#include <math.h>

#define EXIT_SUCCESS 0

int main( void )
{
  int i1, i2, i3, i4,\
  small1, small2, large1, large2, \
  smallest, largest;
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

  if ( i1 < i2 ){
    large1 = i2;
    small1 = i1;
  };
  if ( i3 < i4 ){
    large2 = i4;
    small2 = i3;
  }
  if ( large1 < large2 ){
    largest = large2;
  } else {
    largest = large1;
  }
  if ( small1 < small2 ){
    smallest = small1;
  } else {
    smallest = small2;
  }

  printf("Largest: %d\nSmallest: %d\n", largest, smallest );

  return EXIT_SUCCESS;
}
