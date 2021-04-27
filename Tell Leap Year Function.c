#include <stdio.h>
int leap_year(int y)
{  
  int is_leap;
  is_leap = (y % 400 == 0) || 
    ((y % 4 == 0) && !(y % 100 == 0));
  return is_leap;
}
int main(void)
{
  int year;
  int k;
  scanf("%d", &year);
  k = leap_year(year);
  printf("%d\n", k);
  return 0;
}
 
