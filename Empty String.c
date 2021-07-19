#include <stdio.h>
 
int main(void)
{
  char empty_string[] = "";
  printf("sizeof(empty_string) = %d\n", 
	 sizeof(empty_string));
  printf("empty_string looks like %s\n", 
	 empty_string); 
  return 0;
}
 
