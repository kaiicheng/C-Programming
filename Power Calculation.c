#include <stdio.h>
main()
{
	int i, j, power;
	scanf("%d", &power);
	scanf("%d", &i);
	switch (power){
	case 1:
		j = i;
		break;
	case 2:
		j = i * i;
		break;
	case 3:
		j = i * i * i;
		break;
	default:
		j =  0;
	}
	printf("%d\n", j);
}
