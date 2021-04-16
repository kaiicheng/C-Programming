#include <stdio.h>
main()
{
  double x;
  double e = 1.0;
  int i;
  int n = 20;
  double term = 1.0;
 
  scanf("%lf", &x);
  for (i = 1; i <= n; i++) {
    term *= (x / i);
    e += term;
  }
  printf("%f\n", e);
  return 0;
}
 
