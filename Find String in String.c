#include <stdio.h>
#include <string.h>
 
int main(void)
{
  char *ptr;
  char zodiac[12][40];
  int i;
 
  for (i = 0; i < 12; i++)
    scanf("%s", zodiac[i]);
 
  for (i = 0; i < 12; i++) {
    ptr = strstr(zodiac[i], "er");
    if (ptr == NULL)
      printf("No er in %s\n", zodiac[i]);
    else
      printf("er at %d-th in %s\n", 
	     ptr - zodiac[i], zodiac[i]);
  }
  return 0;
}
 
