#include <stdio.h>
void print_digits(int i)
{
  int index = 0;
  int digits[20];
  if (i < 0)
    return;
  while (i != 0) {
    digits[index] = (i % 10);
    i /= 10;
    index++;
  }
  for (i = index - 1; i >= 0; i--)
    printf("%d\n", digits[i]);
  return;
}
int main(void)
{
  int i;
  scanf("%d", &i);
  print_digits(i);
  return 0;
}
 
