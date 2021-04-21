#include <stdio.h>
void print_matrix(int a[4][3], int i, int j)
{
  printf("a[%d][%d] = %d\n", i, j, a[i][j]);
  return;
}
int main(void)
{
  int i, j;
  int array[3][4];
  for (i = 0; i < 3; i++)			
    for (j = 0; j < 4; j++)
      scanf("%d", &(array[i][j]));
  printf("array[2][1] = %d\n", array[2][1]);
  print_matrix(array, 2, 1);
  printf("array[0][2] = %d\n", array[0][2]);
  print_matrix(array, 0, 2);
  return 0;
}
 
