#include <stdio.h>

void recurse(int);

int main(void) {
  recurse(0);
  return 0;
}

void recurse(int num) {
  if (num < 10) {
    recurse(num + 1); /* 再帰呼び出し*/
    printf("%d ", num);
  }
}