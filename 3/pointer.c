#include <stdio.h>
int main(void){
  int a, b;
  int *p;
  a = 10; /* (1) */
  p = &a; /* (2) */
  *p = 20; /* (3) */
  b = *p; /* (4) */
  printf("a = %d, b = %d\n", a, b);

  return 0;
}