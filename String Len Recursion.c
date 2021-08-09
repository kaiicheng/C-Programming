#include <stdio.h>
int my_strlen(char *string)
{
  if (*string == '\0')
    return 0;
  return(my_strlen(string + 1) + 1);
}
int main(void)
{
  char string[128];
  scanf("%s", string);
  printf("my_strlen(string) = %d\n", 
	 my_strlen(string));
  return 0;
}
 
