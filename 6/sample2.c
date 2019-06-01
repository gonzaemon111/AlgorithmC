#include <stdio.h>
#define N 15

int a[N] = {1, 3, 5, 9, 10, 25, 28, 35, 40, 45, 55, 60, 74, 82, 95};
int main(void) {
  int i, l, r, k, v, m;
  printf("どの数を探索しますか: ");
  scanf("%d", &v);
  
  l=0;
  r=N-1;
  k=-1;
  i=0;

  while (r >= l) {
    printf("%d ",i++);
    m = (l+r)/2;
    if (v == a[m]){
      k=m; break;
    }
    if (v < a[m]) {
      r = m-1;
    } else {
      l = m+1;
    }
    printf("\n%dは%d番目にありました.\n", v, k);
    return 0;
  }
}