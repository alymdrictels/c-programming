#include <stdio.h>

#define EXIT_SUCCESS 0

int factorial( int n );

int main( void )
 {
  int i = 1, n = 0, e;
  double sum = 1, current_term;

  printf("Enter the e: ");
  scanf("%d", &e);

  for(;;i++, sum += current_term)
  {
    current_term = 1.0f / factorial( i );

    if (current_term < e) break;

  }
  printf("e is approximated to %lf", sum);
  return EXIT_SUCCESS;
}

int factorial( int n ){
  int sum = 1;
  while (n > 0){
    sum *= n--;
  }
  return sum;
}
