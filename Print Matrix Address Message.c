#include <stdio.h>
int main(void)
{
  int a[2][3][4];
  int i, j, k;
 
  printf("sizeof(a[0][0][0]) is %d\n", 
	 sizeof(a[0][0][0]));
  printf("sizeof(a[0][0]) is %d\n", 
	 sizeof(a[0][0]));
  printf("sizeof(a[0])is %d\n", 
	 sizeof(a[0]));
  printf("sizeof(a) is %d\n", 
	 sizeof(a));
 
  for (i = 0; i < 2; i++)
    for (j = 0; j < 3; j++)
      for (k = 0; k < 4; k++)
	printf("a[%d][%d][%d] at %p\n", 
	       i, j, k, &(a[i][j][k]));
 
  for (i = 0; i < 2; i++)
    printf("address of a[%d][0] %p\n", 
	   i, &(a[i][0]));
  for (i = 0; i < 2; i++)
    printf("value of a[%d][0] is %p\n", 
	   i, a[i][0]);
  for (i = 0; i < 2; i++)
    printf("address of a[%d] is %p\n", 
	   i, &(a[i]));
  for (i = 0; i < 2; i++)
    printf("value of a[%d] is %p\n", 
	   i, a[i]);
  printf("address of a is %p\n", &a);
  printf("value of a is %p\n", a);
  return 0;
}
 
