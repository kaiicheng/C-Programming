#include <stdio.h>
main() 
{
	int i, j;
	scanf("%d", &i);
	scanf("%d", &j);
	if (i > j){
		printf("%d\n", j);
		printf("%d\n", i);
	} else {
		printf("%d\n", i);
		printf("%d\n", j);		
	}
}
