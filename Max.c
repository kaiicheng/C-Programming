#include <stdio.h>
main() 
{
	int i, j, k, max;
	scanf("%d", &i);
	scanf("%d", &j);
	scanf("%d", &k);
	if (i > j)
		max = i;
	else
		max = j;
	if (k > max)
		max = k;	
	printf("%d\n", max);
}
