#include <stdio.h>
int leap_year(int y)
{  
  int is_leap;
  is_leap = (y % 400 == 0) || 
    ((y % 4 == 0) && !(y % 100 == 0));
  return is_leap;
}
int how_many_days(int year, int month)
{
  int days;
  if (year < 0 || month < 1 
      || month > 12)
    return 0;
  switch (month) 
    {
    case 1: case 3: case 5: case 7: 
    case 8: case 10: case 12:
      days = 31;
      break;
    case 4: case 6: case 9: case 11: 
      days = 30;
      break;
    case 2:
      days = leap_year(year)? 29 : 28; 
      break;
    default:
      days = 0;
    }
  return days;
}
int main(void)
{
  int year;
  int month;
  int days;
  scanf("%d", &year);
  scanf("%d", &month);
  days = how_many_days(year, month);
  printf("%d\n", days);
  return 0;
}
 
