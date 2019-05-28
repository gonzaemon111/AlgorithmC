#include <stdio.h>
#define N 100
int a[N] = {
  /* 100個の数字を適当に書く*/
  28, 1, 10,5,95, 35,25, 82,74,40, 3,55, 9,60, 45
};

int main(void) {
  int max, i;
  max = a[0];
  
  for (i = 1; i < N; i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }

  printf("最大値は%dです.\n", max);
  return 0;
}