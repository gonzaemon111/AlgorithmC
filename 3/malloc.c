#include <stdio.h>
#include <stdlib.h> // malloc関数で使う。

int main(void) {
  int *p;

  if ((p = malloc(sizeof(int)*3)) == NULL) {
    // malloc関数(動的配列)を使って、メモリを確保するが、確保できなった時のハンドリングを書くのが常識
    // malloc(sizeof(int)*3)) 3の部分は、１以上の整数であればなんでもいい。
    printf("Memory error\n");
    exit(1);
  }

  *p = 5;
  printf("%d\n", *p); // 結果: 5
  printf("%d\n", p); //  結果: 毎度コンパイルしなくても変化する。 compile時にwarningが出る。
  return 0;
}