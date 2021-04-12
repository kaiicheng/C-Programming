#include <stdio.h>
main()
{
  int A[2][3], B[3][4], C[2][4];
  int i, j, k;
 
  for (i = 0; i < 2; i++)
    for (j = 0; j < 3; j++)
      scanf("%d", &(A[i][j]));
  for (i = 0; i < 3; i++)
    for (j = 0; j < 4; j++)
      scanf("%d", &(B[i][j]));
  for (i = 0; i < 2; i++)
    for (j = 0; j < 4; j++)
      C[i][j] = 0;
 
  for (i = 0; i < 2; i++)
    for (j = 0; j < 4; j++)
      for (k = 0; k < 3; k++)
	C[i][j] += A[i][k] * B[k][j];
 
  for (i = 0; i < 2; i++)
    for (j = 0; j < 4; j++)
      printf("%d\n", C[i][j]);
  return 0;    
}
 
