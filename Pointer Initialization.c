#include <stdio.h>
int main(void)
{
  int i, k;
  int *iptr1, *iptr2;
  scanf("%d", &i);
  iptr1 = &i;
  iptr2 = iptr1;
  printf("i = %d\n", i);
  printf("&i = %p\n", &i);
  printf("iptr1 = %p\n", iptr1);
  printf("&iptr1 = %p\n", &iptr1);
  printf("iptr2 = %p\n", iptr2);
  printf("&iptr2 = %p\n", &iptr2);
  *iptr1 = 8;  // i值不明顯的被改變了 
  printf("i = %d\n", i);
  k = *iptr2 + 3;  // iptr2 變成8，所以k=8+3 
  printf("&k = %p\n", &k);
  printf("k = %d\n", k);
  return 0;
}
 
