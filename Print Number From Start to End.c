#include <stdio.h>
void print_numbers(int start, int end)
{
  int i;
  for (i = start; i <= end; i++)
    printf("%d\n", i);
  return;
}
int main(void)
{
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);
  print_numbers(a, b);
  return 0;
}
 
