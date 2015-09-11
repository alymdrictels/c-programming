#include <stdio.h>
#include <math.h>

#define EXIT_SUCCESS 0

int main( void )
{
  double radius, volume = 0;
  printf( "Please enter the radius of the sphere (in meters):\n" );
  scanf( "%lf", &radius );

  volume = ( 4.0f / 3.0f ) * M_PI * pow( radius, 2 );

  printf( "The volume of the sphere is %f", volume );
  return EXIT_SUCCESS;
}
