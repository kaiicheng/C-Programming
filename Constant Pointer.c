#include <stdio.h>
int main(void)
{
  int i = 1;
  int j = 2;
  int *ptr_to_int = &i;
  const int * ptr_to_const_int = &i;
  int * const const_ptr_to_int = &i;
  const int * const const_ptr_to_const_int = &i;
  ptr_to_int = &j;		/* OK */
  *ptr_to_int += 3;		/* OK */
  ptr_to_const_int = &j;	/* OK */  //可以指到別的地方  
  *ptr_to_const_int += 3;	/* not OK */  //不能加3，但可以指到別的地方 
  const_ptr_to_int = &j;	/* not OK */  //const pointer不能指到別的地方，但指到的東西可以改(加3) 
  *const_ptr_to_int += 3;	/* OK */  //const pointer不能指到別的地方 ，但指到的東西可以改(加3) 
  const_ptr_to_const_int = &j;	/* not OK */  //都不能改 
  *const_ptr_to_const_int += 3;	/* not OK */  //都不能改  
  return 0;
}
 
