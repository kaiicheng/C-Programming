#include <stdio.h>
main()
{
	int i, j, k, max;
	scanf("%d", &i);
	scanf("%d", &j);
	scanf("%d", &k);
	max = (i > j)? i : j;
	if (k > max)
		max = k;
	printf("%d\n", max);
}
