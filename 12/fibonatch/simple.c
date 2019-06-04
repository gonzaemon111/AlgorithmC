#include <stdio.h>

int F(int);
int count = 0;

int main(void){
  printf("F(10)=%d\n", F(10));
  printf("count = %d\n", count);
  
  return 0;
}

int F(int i) {
  count++;
  if (i < 1) return 0;
  if (i == 1) return 1;
  return F(i-1) + F(i-2);
}