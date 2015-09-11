#include <stdio.h>

int main( void )
{
  long n;
  int i;
  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%li", &n);
  for (i = 1; i <= n; i++)
  {
    if ( i * i < 0 || i < 0)
    {
      printf("Int fails at n of %i, n*n of %i", i, i*i);
      break;
      /* 32-bit in size */

    }
    //printf("%10d%10d\n", i, i*i);
  }
  short j;

  for (j = 1; j <= n; j++)
  {
    if ( j * j < 0 || j < 0 )
    {
      printf("\nShort fails at n of %hi, n*n of %hi", j, j*j);
      break;
      /* 16-bit in size */
    }
    //printf("%15hi%15hi\n", j, j*j);
  }
  long k;
  for (k = 1; k <= n; k++)
  {
    if ( k * k < 0 || k < 0 )
    {
      printf("\nLong fails at n of %li, n*n of %li", k, k*k);
      break;
      /* 64-bit in size*/
    }
    //printf("%15li%15li\n", k, k*k);
  }

  return 0;
}
