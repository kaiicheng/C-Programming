#include <stdio.h>
main() 
{
	int i;
	int j;
	int temp;
	scanf("%d", &i);
	scanf("%d", &j);
	temp = i;
	i = j;
	j = temp;
	printf("%d\n", i);
	printf("%d\n", j);
}