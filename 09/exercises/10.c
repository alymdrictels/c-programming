#include <stdio.h>
#include <limits.h>

int largest(int a[], int n){
  // initialize the largest to the lowest possible int
  // so this works for arbitrary negative ints
  int largest = INT_MIN;
  for ( ; n >= 0; n--){
    if ( a[n] > largest)
      largest = a[n];
  }
}

double average(int a[], int n){

  int sum, no_of_elements = n;

  // assume n is the actual number of elements
  for ( sum = 0; n >= 0; n--)
  {
    sum += a[n];
  }
  return (double)sum / no_of_elements;
}

int num_positive(int a[], int n){

  int count;

  for ( count = 0; n >= 0; n--)
  {
    if (a[n] > 0) count++;
  }
  return count;
}

int main( void )
{

  printf("Largest is %d\n", largest(
  (int[]){13,2,3,4,5,-2,0}
  , 6
  )); // returns 13

  printf("Average is %.2f\n", average(
  (int[]){13,2,3,4,5,-2,0}
  , 6
  )); // returns 4.17f

  // casting the compound literal to int[20] ensures the remaining values are 0
  // so it's not a problem if the n variable is greater than the number of elements
  // unless it's greater than 20
  printf("Number of positives is %d\n",num_positive(
  (int[20]){2,3,4,5,-2,0}
  , 9
  )); // returns 4

  return 0;
}

