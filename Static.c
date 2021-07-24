#include <stdio.h>
 
void foo(void)
{
  int i = 0;
  i++;
  printf("foo: i = %d\n", i);
}
 
void bar(void)
{
  static int i = 0;   //static 會記得上次的值，變數通常拿來做序號用 
  i++;
  printf("bar: i = %d\n", i);
}
 
int main()
{
  int j;
  for (j = 0; j < 5; j++)
    foo();
  for (j = 0; j < 5; j++)
    bar();
  return 0;
}
 
