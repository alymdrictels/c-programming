#include <stdio.h>

#define MAX_LENGTH 20

int main( void )
{
 // this exercise required us to store the last name,
 // but NOT the first name, in an array
  char last_name[MAX_LENGTH];
  char c;
  printf("Enter a first and last name: ");
  // if you have a better solution to input the first char of the name
  // feel free to comment. no, really
  scanf(" %s %s", &c, &last_name[0]);

  printf("You entered the name: %s, %c.", last_name, c);


  return 0;
}
