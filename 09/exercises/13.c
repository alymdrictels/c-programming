#include <stdio.h>

#define N 8

int evaluate_position(char board[8][8])
{
  int sum_black = 0, sum_white = 0;
  int i, j;
  for (i = 0; i < N; i++){
    for (j = 0; j < N; j++){
      switch (board[i][j]){
        case 'Q':
        sum_white += 9;
        break;
        case 'R':
        sum_white += 5;
        break;
        case 'B':
        case 'N':
        sum_white += 3;
        break;
        case 'P':
        sum_white += 1;
        break;
        case 'q':
        sum_black += 9;
        break;
        case 'r':
        sum_black += 5;
        break;
        case 'b':
        case 'n':
        sum_black += 3;
        break;
        case 'p':
        sum_black += 1;
        break;
      }
    }
  }
  return sum_white - sum_black;
}

int main(void)
{
  // you can play around with the board, currently no advantage for either
  // non-ranked pieces are ignored (x = king, p = pawn and k = knight)
  char board[8][8]  = {
    {'R','K','B','X','Q','B','K','R'},
    {'P','P','P','P','P','P','P','P'},
    {'.','.','.','.','.','.','.','.'},
    {'.','.','.','.','.','.','.','.'},
    {'.','.','.','.','.','.','.','.'},
    {'.','.','.','.','.','.','.','.'},
    {'p','p','p','p','p','p','p','p'},
    {'r','k','b','q','x','b','k','r'}
    };
  int advantage = evaluate_position( board );

  printf("Advantage %s (by %d).\n",
  advantage == 0 ? "None" : (advantage > 0 ? "White" : "Black"),
  // get the absolute value
  (advantage < 0) ? -advantage : advantage
  );

  return 0;
}
