#include <stdio.h>
void test(int j)
{
  printf("test: the address of j = %p\n", &j);
  printf("test: before adding 1 j = %d\n", j);
  j++;
  printf("test: after adding 1 j = %d\n", j);
  return;
}
int main(void)
{
  int i;
  scanf("%d", &i);
  printf("main: the address of i = %p\n", &i);
  printf("main: before calling test i = %d\n", i);
  test(i);
  printf("main: after calling test i = %d\n", i);
  test(3 + 7);
  return 0;
}
 
