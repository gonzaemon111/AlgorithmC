#include <stdio.h>

long facorial(int n) {
  long ans;
  if (n==1 || n==0){
    return 1;
  }
  ans = n * facorial(n-1);
  return ans;
}

int main(void) {
  int n;
  scanf("%d", &n);

  printf("%ld\n",facorial(n));
}