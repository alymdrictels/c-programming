#include <stdio.h>

// this is not exactly pretty. not sure if ternaries were the intended solution
// it's easier to introduce a 'result' variable to store the return

double median(double x, double y, double z)
{
  return  (x <= y) ?
          (y <= z ?
            y : (x <= z ? z : x)) :
          (z <= y ?
            y : (x <= z ? x : z));
}

int main(void)
{
  printf("The median is %f", median(12, 3, 11));

  return 0;
}
