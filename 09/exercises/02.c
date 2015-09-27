#include <stdio.h>


/*
  trying the minimum declaration that does not throw a warning
*/
int check();

int main( void )
{
  printf("Enter a number: ");

  int x, y, n;

  scanf("%d %d %d", &x, &y, &n);

  printf("The numbers %d %d and %d return %s.",
    x, y, n,
    check(x,y,n) ? "true" : "false"
  );

  return 0;
}

int check(int x, int y, int n)
{
  return
  (x >= 0 && x <= (n -1))
  &&
  (y >= 0 && y <= (n -1))
  ;
}
