#include <string.h>
#include <stdio.h>

int main(void){

  char str1[80], str2[80];
  int i;

  printf("第1の文字列を入力してください: ");
  gets(str1);

  printf("第2の文字列を入力してください: ");
  gets(str2);/* 文字列の長さを確認する*/
  
  printf("%s は%lu 文字の長さです\n", str1, strlen(str1));

  printf("%s は%lu 文字の長さです\n", str2, strlen(str2));

  return 0;
}