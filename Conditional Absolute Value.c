#include <stdio.h>
main()
{
	int i;
	int k;
	scanf("%d", &i);
	k = (i > 0)? i : -i;
	printf("%d\n", k);
}
