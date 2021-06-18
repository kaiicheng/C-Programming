#include <stdio.h>
int *first_positive(int *ptr)
{
  while (*ptr <= 0)
    ptr++;
  return ptr;
}
int main(void)
{
  int i;
  int array[10];
  int *iptr;
 
  for (i = 0; i < 10; i++)
    scanf("%d", &(array[i]));
  iptr = first_positive(array);
  printf("*iptr = %d\n", *iptr);
  printf("iptr - array = %d\n", iptr - array);
  iptr = first_positive(&(array[5]));
  printf("*iptr = %d\n", *iptr);
  printf("iptr - array = %d\n", iptr - array);
  return 0;
}

