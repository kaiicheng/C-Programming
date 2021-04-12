#include <stdio.h>
main()
{
  int composite[1000];
  int i;
  int j = 2;
  int count = 0;
  int column;
  int n;
  scanf("%d", &n);
  scanf("%d", &column);
  for (i = 2; i <= n; i++)
    composite[i] = 0;
  while (j * j <= n) {
    while (composite[j] == 1)
      j++;
    for (i = 2 * j; i <= n; i += j)
      composite[i] = 1;
    j++;
  }
  for (i = 2; i <= n; i++)
    if (composite[i] == 0) {
      if (count % column == (column - 1))
	printf("%3d\n", i);
      else
	printf("%3d ", i);
      count++;
    }
  return 0;  
}
 
