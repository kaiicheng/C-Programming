#include <stdio.h>
int main(void)
{
  int a[5];
  int i;
  int *ptr;
  for (i = 0; i < 5; i++)
    scanf("%d", &(a[i]));
  for (i = 0, ptr = a; i < 5; i++, ptr++) {
    printf("%p\n", ptr);
    *ptr += 3;
  }
  for (i = 0; i < 5; i++) 
    printf("a[%d] = %d\n", i, a[i]);
  return 0;
}
 
