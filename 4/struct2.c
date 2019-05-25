// struct1.cと同じ内容である。 構造体のグローバル変数定義にしただけ

#include <stdio.h>

struct point {
  int x;
  int y;
} p1, p2;
// p1 , p2 をグローバル変数として定義

int main(void) {

  p1.x = 1; p1.y = 0;
  p2 = p1;

  printf("p1.x : %d  p1.y : %d\n", p1.x, p1.y);
  printf("p2.x : %d  p2.y : %d\n", p2.x, p2.y);
  return 0;
}