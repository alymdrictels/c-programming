#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 80

#define ENC_UPPER(c) (((c - 'A') + shift) % 26 + 'A')
#define ENC_LOWER(c) (((c - 'a') + shift) % 26 + 'a')

#define SHIFT_INVALID (shift < 1 || shift > 25)
#define ch (message[i])

// sorry about the macro use, got over-excited

int main( void )
{
  char message[80];
  printf("Enter message to be encrypted: ");
  scanf("%s", &message[0]);

  unsigned short shift;
  do
  {
    printf("Enter shift amount (1-25): " );
    scanf("%hu", &shift);
  }
  while ( SHIFT_INVALID );

  int i;
  for ( i = 0; ch != '\0'; i++ )
  {
    // this automatically excludes non-letters
    if ( islower(ch) )
      ch = ENC_LOWER( ch );
    else if ( isupper( ch ) )
      ch = ENC_UPPER( ch );
  }
  printf("Encrypted message: %s", message);

  return 0;
}
