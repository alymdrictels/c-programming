#include <stdio.h>

#define EXIT_SUCCESS 0

int main( void )
{

  int m, d, y, order, m_early, d_early, y_early, sum, sum_early;
  int counter = 0;
  for (;;)
  {
    printf("Enter date %d (mm/dd/yy): ", counter + 1);
    scanf("%2d/%2d/%2d", &m, &d, &y);
    if (m == 0 && d == 0 && y == 0) break;
    sum = 365 * y + 30 * m + d;
    /*
    I was considering setting the initial early date to a high number
    so as to avoid this check. Neither is very clean, but moving on...
    */
    if ( counter == 0){
      sum_early = sum;
      d_early = d;
      m_early = m;
      y_early = y;
    } else {
      sum_early = 365 * y_early + 30 * m_early + d_early;
    }

    if (sum < sum_early)
    {
      d_early = d;
      m_early = m;
      y_early = y;
    }
    counter++;
  }


  printf("%d/%d/%02d is the earliest date\n", m_early, d_early, y_early);

  return EXIT_SUCCESS;
}
