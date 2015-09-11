#include <stdio.h>

#define EXIT_SUCCESS 0

int main( void )
 {
  int grade, ten_digit, letter;

  printf("Enter numerical grade: ");
  scanf("%d", &grade);
  ten_digit = grade / 10;

  /*
    don't mind me, trying out this brace style
  */

  if (grade > 100)
  {
    printf("Error. Grade is greater than 100.\n");
  }
  else if (grade < 0)
  {
    printf("Error. Grade is less than 0.\n");
  }
  else if (grade == 100)
  {
    printf("Letter grade: A");
  }
  else
  {
    switch (ten_digit)
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        letter = 'F';
        break;
      case 6:
        letter = 'D';
        break;
      case 7:
        letter = 'C';
        break;
      case 8:
        letter = 'B';
        break;
      case 9:
        letter = 'A';
        break;
    }
    printf("Letter grade: %c", letter);
  }


  return EXIT_SUCCESS;
}
