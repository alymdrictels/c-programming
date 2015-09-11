#include <stdio.h>

#define EXIT_SUCCESS 0

int factorial( int n );

int main( void )
 {
  unsigned long long i = 0;
  int n = 0;
  double sum = 1;

  /*
    Tried creating larger sums to get greater precision but
    got output of "1.#QNAN0".
    Apparently the GMP library should be used for this.
  */
  printf("Enter the n: ");
  scanf("%d", &n);

  while (i++ <= n)
  {
    sum += 1.0f / factorial( i );
    printf("%d\n", factorial(i));
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
