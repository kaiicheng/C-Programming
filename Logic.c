#include <stdio.h>
main()
{
	int i = 3;
	int j = 0;
	int k;
	k = (i && j);
	printf("%d\n", k);
	k = (i || j);
	printf("%d\n", k);
	k = !i;
	printf("%d\n", k);
	k = !j;
	printf("%d\n", k);
}
