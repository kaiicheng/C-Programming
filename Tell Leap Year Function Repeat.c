#include <stdio.h>
int leap_year(int y);
 
int main(void)
{
  int year;
  int k;
  while (scanf("%d", &year) != EOF) {
    k = leap_year(year);
    printf("%d\n", k);0
  }
  return 0;
}
 
int leap_year(int y)
{  
  int is_leap;
  is_leap = (y % 400 == 0) || 
    ((y % 4 == 0) && !(y % 100 == 0));
  return is_leap;
}
 
