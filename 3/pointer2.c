#include <stdio.h>

void swap(int *p, int *q);

int main(void) {
  int a=10, b=20;

  printf("a=%d, b=%d\n", a, b); // swap前
  swap(&a, &b);
  printf("a=%d, b=%d\n", a, b); // swap後
  return 0;
}
// アドレスを渡すと、そのアドレスの参照先、つまりポインタがswapする。
void swap(int *p, int *q) {
  int work;
  work=*p; /* (1) */
  *p=*q;   /* (2) */
  *q=work; /* (3) */
}