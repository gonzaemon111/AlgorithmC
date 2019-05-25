#include <stdio.h>

struct point {
  int x;
  int y;
};

struct rectangle {
  // 構造体の中に構造体がある。
  struct point p1;
  struct point p2;
};

int main(void) {
  struct rectangle r;

  r.p1.x = 1;

  printf("r.p1.x : %d\n", r.p1.x);
  return 0;
}