#include <stdio.h>
struct point {
  int x;
  int y;
};

int main(void) {
  struct point p1;
  struct point p2;

  p1.x = 1; p1.y = 0;
  p2 = p1;

  printf("p1.x : %d  p1.y : %d\n", p1.x, p1.y);
  printf("p2.x : %d  p2.y : %d\n", p2.x, p2.y);
  return 0;
}