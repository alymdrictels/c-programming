#include <stdio.h>


// length of the array can be omitted if an initializer is present
const int old_segments[] = {
  {1, 1, 1, 1, 1, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {1, 1, 0, 1, 1, 0, 1},
  {1, 1, 1, 1, 0, 0, 1},
  {0, 1, 1, 0, 0, 1, 1},
  {1, 0, 1, 1, 0, 1, 1},
  {1, 0, 1, 1, 1, 1, 1},
  {1, 1, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 0, 1, 1},
};

// this is tricky, because designated initializers do not shorten
// the declaration as much as expected (since there are a lot of '1'-s)

// ideally, initializers should be able to default to 1
// so we could cherry-pick-initialize the 0 values instead
// (would not be shorter, though)
// I opted to not initialize the array to 1 via a loop

// apparently even in C++ this is accomplished using a function as a crutch
// see http://stackoverflow.com/questions/1065774/c-c-initialization-of-a-normal-array-with-one-default-value

const int shortened_segments[10][7] = {
  {1, 1, 1, 1, 1, 1},
  {0, 1, 1},
  {1, 1, 0, 1, 1, 0, 1},
  {1, 1, 1, 1, 0, 0, 1},
  {0, 1, 1, 0, 0, 1, 1},
  {1, 0, 1, 1, 0, 1, 1},
  {1, 0, 1, 1, 1, 1, 1},
  {1, 1, 1},
  {1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 0, 1, 1},
};
