#include <string.h>
#include <stdio.h>

int main(void){

  char s[8] = "book";
  char r[8] = "abc";
  strcat(s, r); // char型の配列sにchar型の配列rをcat(append or push)する。

  printf("%s\n", s); // bookabc が出力される

  return 0;
}