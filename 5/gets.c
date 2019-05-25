#include <stdio.h>
#include <string.h>

int main(void) {
  char s[8];
  gets(s);

  printf("%s\n", s);
  return 0;
}