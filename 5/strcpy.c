#include <string.h>
#include <stdio.h>

int main(void){

  char s[8];
  char r[8] = "book";
  strcpy(s, r); // char型の配列rをchar型の配列sにコピーする。

  printf("%s\n", s);

  return 0;
}