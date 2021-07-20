#include <stdio.h>
#include <string.h>
 
int main(void)
{
  char source[40] = "This is a string.";
  int i = 5;
  char destination[4];
  printf("The address of source is %p.\n",source);
  printf("The size of source is %d\n", 
	 sizeof(source));
  printf("The address of i is %p\n", &i);
  printf("The size of i is %d\n", sizeof(i));
  printf("The address of destination is %p\n", 
	 destination);
  printf("The size of destination is %d\n", 
	 sizeof(destination));
  printf("strlen(source) is %d\n",strlen(source));
  printf("i is %d\n", i);
  strncpy(destination, source, 3);
  destination[3] = '\0';
  printf("i is %d\n", i);
  printf("source is now <%s>\n", source);
  printf("destination is now <%s>\n",destination);
  return 0;
}
 
