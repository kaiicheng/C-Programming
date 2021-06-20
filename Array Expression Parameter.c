#include <stdio.h>
void print_array(int a[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf("a[%d] = %d\n", i, a[i]);
  return;
}
void inc_array(int a[], int n)
{
  int i;
  printf("inc_array: a = %p\n", a);
  for (i = 0; i < n; i++)
    a[i]++;
  return;
}

#define ASIZE 5 

int main(void)
{
  int i;
  int array[5];
  for (i = 0; i < 5; i++)
    scanf("%d", &(array[i]));
  printf("before inc_array\n");
  print_array(array, 5);
  inc_array(array, 5);
  printf("after first inc_array\n");
  print_array(array, 5);
  inc_array(&(array[1]), 2);
  printf("after second inc_array\n");
  print_array(array, 5);
  inc_array(&(array[2]), 2);
  printf("after second inc_array\n");
  print_array(array, 5);
  return 0;
}
 
