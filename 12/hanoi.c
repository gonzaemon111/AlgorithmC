#include <stdio.h>

//　最小移動回数を求める。
int hanoi_min(int n)
{
  if(n > 1)
    return( 2*hanoi_min(n - 1) + 1 );
  else
    return 1;
}

//　 最小で移動させる手順を求める。
// hanoi(int 円盤数,int 移動元,int 仲介,int 移動先)
void hanoi(int n, char start, char use, char end)
{
  if(n > 0) {
    hanoi(n - 1, start, end, use);
    printf("円盤%dを 杭%c から 杭%c へ\n", n, start, end);
    hanoi(n - 1, use, start, end);
  }
}

int main() {
  int disk;

  printf("円盤の数："); scanf("%d", &disk);
 
  puts("-----------------");
  printf("最小移動回数：%d\n", hanoi_min(disk));
  puts("-----------------");
 
  puts("以下は移動手順\n");
  hanoi(disk, 'A', 'B', 'C');

  return 0;
}


