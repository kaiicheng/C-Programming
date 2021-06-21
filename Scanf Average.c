#include <stdio.h>
 
int main()
{
  int sum = 0;
  int count = 0;
  int i;
 
  while (scanf("%d", &i) != EOF) {
    sum += i;
    count++;
  }
  printf("%d\n", sum / count);
  return 0;
}

