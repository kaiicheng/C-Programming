#include <stdio.h>
 
int main(void)
{
  double radius;
  const double pi = 3.1415926;  // const cannot be changed. 
  pi = 3.0;  // [Error] assignment of read-only variable 'pi'
  scanf("%lf", &radius); 
  printf("%f\n", radius * 2 * pi);
  return 0;
}
 
