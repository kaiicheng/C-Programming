#include <stdio.h>
 
int main(void)
{
  char s[80] = {'m', 'a', 'i', 'n', '(', ')', '\n', 
		'{', '\n', '}', '\n'} ;
  int i;
  for (i = 0; i < 11; i++)
    printf("%c", s[i]);
  return 0;
}
 
