#include <stdio.h>

#define EXIT_SUCCESS 0

int main( void )
{
  int prefix, first_segment, second_segment;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &prefix, &first_segment, &second_segment);

  printf("You entered %.3d.%.3d.%.3d\n", prefix, first_segment, second_segment);

  return EXIT_SUCCESS;
}
