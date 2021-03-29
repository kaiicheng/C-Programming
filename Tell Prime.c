#include <stdio.h>
main()
{
	int i;
	int j = 0;
	int n;
	scanf("%d", &n);
	for (i = 2; (i * i) <= n; i++)
		if ((n % i) == 0)
			j = 1;
	printf("%d\n", j);
}
