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
    //  出力結果 9 8 7 6 5 4 3 2 1 0 %
  }
}