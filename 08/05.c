#define N 10
#define ARRAY_ELEMENT_COUNT(n) (sizeof(n) / sizeof(n)[0])
#include <stdio.h>

#define INITIAL_BALANCE 100.00

// played around with the formatting a bit because the numbers get large quickly

int main( void )
{
  short is_new_year_flag = 0, year;
  int i, low_rate, num_years, month;
  double value[5];

  printf("Enter interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter number of years: ");
  scanf("%d", &num_years);

  printf("\nYears");
  for (i = 0; i < ARRAY_ELEMENT_COUNT(value); i++)
  {
    printf("%10d%%", low_rate + i);
    value[i] = INITIAL_BALANCE;
  }
  printf("\n");

  for (month = 1; month <= num_years * 12; month++)
  {
    is_new_year_flag = (month == 1 || (month % 12) == 0);
    year = 1 + month / 12;
    if (is_new_year_flag)
    {
      printf("%3d\t", (month / 12) + 1);
    }

    for (i = 0; i < ARRAY_ELEMENT_COUNT(value); i++)
    {
      value[i] += (low_rate + i) / 100.0 * value[i];
      if (is_new_year_flag)
      {
        printf("%10.2f ", value[i]);
      }

    }
    if (is_new_year_flag)
    {
      printf("\n");
    }
  }

  return 0;
}

/*
// original interest.c

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main( void )
{
  int i, low_rate, num_years, year;
  double value[5];

  printf("Enter interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter number of years: ");
  scanf("%d", &num_years);

  printf("\nYears");
  for (i = 0; i < NUM_RATES; i++)
  {
    printf("%6d%%", low_rate + i);
    value[i] = INITIAL_BALANCE;
  }
  printf("\n");

  for (year = 1; year <= num_years; year++)
  {
    printf("%3d     ", year);
    for (i = 0; i < NUM_RATES; i++)
    {
      value[i] += (low_rate + i) / 100.0 * value[i];
      printf("%7.2f", value[i]);
    }
    printf("\n");
  }

  return 0;
}
*/
