#include <stdio.h>

double inner_product(double a[], double b[], int n)
{
  double product;
  int i;
  for (i = 0; i < n; i++)
    product += a[i] + b[i];

  return product;
}

int main(void)
{
  printf("The product is: %.3f",
  inner_product(
    (double[]){2.3, 1.3, 0.43, 12.3},
    (double[]){2.2, 5.3, 12.43, 11.3},
    4
    )
  );

  return 0;
}
