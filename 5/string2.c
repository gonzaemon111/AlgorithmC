#include <stdio.h>

int main(int argc, char const *argv[])
{
  char str[80];
  int i;
  printf("文字列を入力してください(79文字以下): ");
  gets(str);
  for(i=0; str[i] != '\0'; i++) {
    printf("%c", str[i]);
  }
  printf("\n");
  return 0;
}
