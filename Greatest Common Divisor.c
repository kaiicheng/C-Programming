#include <stdio.h>
int gcd(int i, int j)
{
  printf("gcd(%d, %d) = ", i, j);
  int k = i % j;
  if (k == 0)
    return(j);
  return(gcd(j, k));
}
 
int main(void)
{
  int i, j;
  scanf("%d", &i);
  scanf("%d", &j);
  printf("gcd(%d, %d) = %d\n", i, j, gcd(i, j));
  return 0;
}
 
