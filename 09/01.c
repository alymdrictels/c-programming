#include <stdio.h>

#define NO_ELEMENTS 9

void selection_sort( int set[], int number_of_elements );
void switch_positions( int set[], int first_index, int second_index );
void print_array( int set[], int number_of_elements, char* label_string);

int main(void)
{
  int set[] = {12,3,-1,34,6,4, 145, 122, 1};

  print_array( set, NO_ELEMENTS, "Initial status of the array:" );

  selection_sort(set, NO_ELEMENTS);

  print_array( set, NO_ELEMENTS, "\nFinal status of the array:" );

  return 0;
}

void print_array( int set[], int n, char* label)
{
  int i;

  printf("%s ", label);

  for ( i = 0; i < NO_ELEMENTS; i++){
    printf("%d ", set[i]);
  }
}

void selection_sort( int set[], int n )
{
  if ( n == 1 ) return;

  int max_index = n - 1;
  int i, tmp;

  // get the index of the maximum value in this subset
  for ( i = max_index; i >= 0; i--)
  {
    if ( set[i] > set[max_index] )
      max_index = i;
  }

  // if the last element of the array is not the max element
  // switch places for the last element of the array and the max
  if ( max_index != n )
    switch_positions( set, n - 1, max_index);

  return selection_sort( set, n - 1);
}

void switch_positions( int set[], int first, int second)
{
  int tmp;
  tmp = set[ first ];
  set[ first ] = set[ second ];
  set[ second ] = tmp;
}
