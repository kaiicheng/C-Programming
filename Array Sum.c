#include <stdio.h>
 
int sum(const int a[], const int n)
{
  int i;
  int sum = 0;
  for (i = 0; i < n; i++)
    sum += a[i];
  return sum;
}
int main(void)
{
  int i;
  int array[5];
  for (i = 0; i < 5; i++)
    scanf("%d", &(array[i]));
  printf("Sum = %d\n", sum(array, 5));
  return 0;
}
 
