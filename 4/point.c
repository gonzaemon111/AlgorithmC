#include <stdio.h>
#include "point.h"

int main(void){
  Point p1, p2, p3;
  p1.x = N;
  p1.y = N;
  p2.x = 1;
  p2.y = 2;
  p3 = Point_add(p1, p2);
  
  printf("%d %d\n", p3.x, p3.y);
  
  return 0;
}

Point Point_add(Point a, Point b){
  Point c;
  c.x = a.x + b.x;
  c.y = a.y + b.y;
  
  return c;
}