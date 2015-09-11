#include <stdio.h>

#define EXIT_SUCCESS 0

int main( void )
 {
  int d1 = 0, d2 = 0, number;

  /*
    does not cover 0-9
  */
  printf("Enter a two-digit number: ");

  scanf("%1d%1d", &d1, &d2);
  number = d1 * 10 + d2;

  printf("You entered the number ");

  switch (d1)
  {
    case 0:
    /* print nothing */
    break;
    case 1:
      switch (d2)
      {
        case 0:
          printf("ten");
          break;
        case 1:
          printf("eleven");
          break;
        case 2:
          printf("twelve");
          break;
        case 3:
          printf("thirteen");
          break;
        case 4:
          printf("fourteen");
          break;
        case 5:
          printf("fifteen");
          break;
        case 6:
          printf("sixteen");
          break;
        case 7:
          printf("seventeen");
          break;
        case 8:
          printf("eighteen");
          break;
        case 9:
          printf("nineteen");
          break;
      }
      break;
        case 2:
          printf("twenty");
          break;
        case 3:
          printf("thirty");
          break;
        case 4:
          printf("forty");
          break;
        case 5:
          printf("fifty");
          break;
        case 6:
          printf("sixty");
          break;
        case 7:
          printf("seventy");
          break;
        case 8:
          printf("eighty");
          break;
        case 9:
          printf("ninety");
          break;
  }
  if ( number > 19 )
  {
    if ( d2 != 0)
    {
      printf("-");
    }

    switch (d2)
    {
      case 0:
        /* print nothing */
        break;
      case 1:
        printf("one");
        break;
      case 2:
        printf("two");
        break;
      case 3:
        printf("three");
        break;
      case 4:
        printf("four");
        break;
      case 5:
        printf("five");
        break;
      case 6:
        printf("six");
        break;
      case 7:
        printf("seven");
        break;
      case 8:
        printf("eight");
        break;
      case 9:
        printf("nine");
        break;
    }
  }
  return EXIT_SUCCESS;
}
