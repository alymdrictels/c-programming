#include <stdio.h>

#define EXIT_SUCCESS 0

int main( void )
{
  int number, oct1, oct2, oct3, oct4, oct5;
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &number);
  oct1 = number % 8
  oct2 = number / 8 % 8;
  oct3 = number / 64 % 8;
  oct4 = number / 512 % 8;
  oct5 = number / 4096 % 8;
  printf("In octal, your number is: %d%d%d%d%d", oct5, oct4, oct3, oct2, oct1);
  return EXIT_SUCCESS;
}
