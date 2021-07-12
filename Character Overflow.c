#include <stdio.h>
int main(void)
{
  char c;
  int i;
  scanf("%d", &i);
  c = i;
  c++;
  i++;
  printf("c = %d\n", c);
  printf("i = %d\n", i);
  return 0;
}
 
