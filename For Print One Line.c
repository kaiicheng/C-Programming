#include <stdio.h>
main()
{
  int i;
  int start;
  int end;
  scanf("%d", &start);
  scanf("%d", &end);
  for (i = start; i <= end; i++)
    printf("%d ", i);
  return 0;  
}
