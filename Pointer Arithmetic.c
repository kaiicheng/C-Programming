#include <stdio.h>
int main(void)
{
  int array[10];
  int *iptr1 = &(array[3]);  // point to 3rd.
  int *iptr2 = iptr1 + 4;  // point to 7th.
  printf("iptr1 = %p\n", iptr1);
  printf("iptr2 = %p\n", iptr2);
  printf("iptr2 - iptr1 = %d\n", iptr2 - iptr1);
  return 0;
}

