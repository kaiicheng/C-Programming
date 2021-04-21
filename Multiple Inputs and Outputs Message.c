#include <stdio.h>
int main(void)
{
  int i;
  float f;
  double df;
  scanf("%d%f%lf", &i, &f, &df);
  printf("int %d adr %p flt %f dbl %f\n", 
	 i, &i, f, df);
  return 0;
}
 
