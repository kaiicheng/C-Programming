#include <stdio.h>
void pointer_inc(int *p1, int *p2)  // p1, p2都只存在pointer_inc裡面 
{ 
  printf("The address of p1 is %p\n", &p1);
  printf("The value of p1 is %p\n", p1);
  printf("The address of p2 is %p\n", &p2);
  printf("The value of p2 is %p\n", p2);
  *p1 += 1;
  p1 = p2;
  *p1 += 2;
}
int main(void)
{
  int i, j;
  int *iptr = &i;
 
  scanf("%d", &i);
  scanf("%d", &j);
  printf("The address of i is %p\n", &i);
  printf("The address of j is %p\n", &j);
  printf("The address of iptr is %p\n", &iptr);
  printf("i = %d, j = %d\n", i, j);
  pointer_inc(iptr, &j);
  printf("i = %d, j = %d\n", i, j);
  *iptr += 5;  // 跟 pointer_inc裡面的 p1, p2 無關 
  printf("i = %d, j = %d\n", i, j);
  return 0;
}
 
