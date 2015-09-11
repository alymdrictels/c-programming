#include <stdio.h>

#define EXIT_SUCCESS 0

int main( void )
{
  int gs1_prefix, group_identifier, publisher_code, item_number, check_digit;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_identifier, &publisher_code, &item_number, &check_digit);
  /*
   IF statements are not yet covered in this part of the book,
   so no input validation
   */
  printf("GS1 prefix: %d\n", gs1_prefix);
  printf("Group Identifier: %d\n", group_identifier);
  printf("Publisher Code: %d\n", publisher_code);
  printf("Item Number: %d\n", item_number);
  printf("Check Digit: %d\n", check_digit);

  return EXIT_SUCCESS;
}
