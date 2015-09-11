#include <stdio.h>

#define EXIT_SUCCESS 0

int main( void )
{

  int m1, d1, y1, m2, d2, y2, order, sum1, sum2;
  printf("Enter first date (mm/dd/yy): ");
  scanf("%2d/%2d/%2d", &m1, &d1, &y1);
  printf("Enter second date (mm/dd/yy): ");
  scanf("%2d/%2d/%2d", &m2, &d2, &y2);

  sum1 = 365 * y1 + 30 * m1 + d1;
  sum2 = 365 * y2 + 30 * m2 + d2;

  if ( sum1 > sum2 ){
    printf("%d/%d/%02d is earlier than %d/%d/%02d", m2, d2, y2, m1, d1, y1);
  } else if ( sum2 < sum1 ){
    printf("%d/%d/%02d is earlier than %d/%d/%02d", m1, d1, y1, m2, d2, y2);
  } else {
    printf("They are the same. Are you even trying?");
  }

  return EXIT_SUCCESS;
}
