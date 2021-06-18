#include <stdio.h>
 
void swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
 
int main(void)
{
  int i, j;
  scanf("%d", &i);
  scanf("%d", &j);
  swap(&i, &j);
  printf("i = %d, j = %d\n", i, j);
  return 0;
}
 
