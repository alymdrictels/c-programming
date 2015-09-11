#include <stdio.h>

#define EXIT_SUCCESS 0

int main( void )
{
  float money;

  printf("Enter an amount: ");
  scanf("%f", &money);

  printf("With tax added: $%.2f", money * 1.05f );

  return EXIT_SUCCESS;
}
