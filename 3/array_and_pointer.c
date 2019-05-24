#include <stdio.h>
int main(void){
  int a[3];
  int *p;

  p=a; // p は aの先頭アドレス
  *p=10; // aの先頭アドレスがさす値a[0]が10である　と明記している。 
  p=p+1;
  *p=20; // a[1] = 20
  p=p+1;
  *p=30;

  for(int i=0; i<3; i++) printf("a[%d]=%d\n",i, a[i]);

  return 0;
}