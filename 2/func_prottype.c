#include <stdio.h>

/* 関数プロトタイプには，引数の変数がなくてもよい*/
double volume(double, double, double);

int main(void) {
  double vol;
  vol= volume(12.2, 5.67, 9.03);
  printf("体積: %f\n", vol);
  return 0;
}

/* 立方体の体積を算出する*/
double volume(double s1, double s2, double s3) {
  return s1 * s2 * s3;
}