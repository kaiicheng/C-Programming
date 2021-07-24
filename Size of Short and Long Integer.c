#include<stdio.h>
 
int main(void)
{
  int i;
  long int li;
  short int si;
  long long int lli;
 
  printf("sizeof(int) = %d\n", sizeof(int));
  printf("sizeof(long) = %d\n", sizeof(long));
  printf("sizeof(short) = %d\n", sizeof(short));
  printf("sizeof(long long) = %d\n", 
	 sizeof(long long));
  return 0;
}
