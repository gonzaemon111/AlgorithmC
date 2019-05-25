#include <stdio.h>

struct point {
  int x;
  int y;
};

void add_point(struct point *pp);

int main(void){
  struct point p = {0,0};
  add_point(&p); // &pはアドレス
  printf("x : %d y : %d\n", p.x, p.y);
  return 0;
}

void add_point(struct point *pp) {
  // pp->x は，(*pp).xと同じ意味を表す表現
  pp->x = pp->x + 1;
  pp->y = pp->y + 1;
}