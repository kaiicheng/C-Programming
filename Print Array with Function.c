#include <stdio.h>
void print_array(int array[], int n)
{
  int i;
  printf("array is at %p\n", array);
  for (i = 0; i < n; i++)
    printf("array[%d] = %d\n", i, array[i]);
  return;
}
#define ASIZE 3
#define BSIZE 5
int main(void)
{
  int i;
  int a[3];
  int b[5];
  printf("main: a = %p\n", a);
  printf("main: b = %p\n", b);
  for (i = 0; i < 3; i++)
    scanf("%d", &(a[i]));
  for (i = 0; i < 5; i++)
    scanf("%d", &(b[i]));
  print_array(a, 3);
  print_array(b, 5);
  return 0;
}
 
