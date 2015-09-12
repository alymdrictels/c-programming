int chess_board[7][7] = {0};

int i, j;

for ( i = 0; i <= 7; i++ )
{
  for ( j = 0; j <= 7; j++ )
  {
    if ( (i + j) % 2 == 0)
    {
      chess_board[ i ][ j ] = 'B';
    }
    else
    {
      chess_board[ i ][ j ] = 'R';
    }

  }
}
