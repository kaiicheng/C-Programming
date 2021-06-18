#include <stdio.h>
int main(void)
{
  int a[5];
  int i;
   
  for (i = 0; i < 5; i++)  // create a array 
    scanf("%d", &(a[i]));
  
  int *ptr = a;  // 指向a 的開始 
  for (i = 0; i < 2; i++)
    ptr[i] += 3;
    
  for (i = 0; i < 5; i++) 
    printf("a[%d] = %d\n", i, a[i]);
  printf("\n");
  
  ptr = &(a[2]); 
  for (i = 0; i < 2; i++)
    ptr[i] += 3;
  
  for (i = 0; i < 5; i++) 
    printf("a[%d] = %d\n", i, a[i]);
  
  return 0;
}

