#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here.
   * Note:
   * - Do not use a
   * - Do not modify p
   * - only one statement
   * - Do not code anything except this line of code
   */
  *(p + 5) = 98;
  printf("a[2] = %d\n", a[2]);
  return (0);
}
