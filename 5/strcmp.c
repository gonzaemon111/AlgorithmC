#include <string.h>
#include <stdio.h>

int main(void){

  char s[8] = "abc";
  char r[8] = "def";

  // strcmp(s, r) は chat型の配列sとrが同じ時は0を返し、異なる時は0以外を返す。
  if (strcmp(s, r) == 0)
    printf("%sと%sは同じです\n", s, r);
  else
    printf("%sと%sは違います\n", s, r);

  printf("%s\n", s);

  return 0;
}