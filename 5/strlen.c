#include <string.h>
#include <stdio.h>

int main(void){

  char s[8] = "book";
  printf("%sの長さは%luです\n", s, strlen(s));

  printf("%s\n", s);

  return 0;
}