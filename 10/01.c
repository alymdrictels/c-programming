#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

bool is_empty( void );
bool is_full( void );
void make_empty( void );
char pop( void );
void push( char );
void stack_overflow( void );
void stack_underflow( void );

int top = 0;

char contents[STACK_SIZE];

int main( void )
{
  int c, left_paren;
  printf("Enter parentheses and/or braces: ");
  while ( (c = getchar()) != '\n')
  {
    if (c == '(' || c == '{' || c == '[')
    {
      push(c);
    }
    else if (c == ')' || c == '}' || c == ']')
    {
      left_paren = pop();
      if (  (c == ')' && left_paren =='(')
         || (c == '}' && left_paren =='{')
         || (c == ']' && left_paren =='[') )
      {
        // okay
      }
      else
      {
        break;
      }
    }
  }
  if ( is_empty() )
    printf("The parens are matched");
  else
  {
    printf("The parens are not matched");
  }
  return 0;
}

bool is_empty( void )
{
  return top == 0;
}

bool is_full( void )
{
  return top == STACK_SIZE;
}

void make_empty( void )
{
  top = 0;
}

char pop( void )
{
  if ( is_empty() )
      stack_underflow();
  else
    return contents[ --top ];
}

void push( char c )
{
  if ( is_full() )
    stack_overflow();
  else
    contents[top++] = c;
}

void stack_overflow( void )
{
  printf("Stack overflow");
  exit(1);
}

void stack_underflow( void )
{
  exit(1);
}
