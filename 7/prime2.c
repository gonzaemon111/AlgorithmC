#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i, j, N;
  int *a;
  N = atoi(argv[1]);
  a = malloc(N*sizeof(int));
  if (a == NULL) {
    printf("Insufficient memory.\n");
    exit(1);
  }

  for (i = 2; i < N; i++) a[i] = 1;
  for (i = 2; i < N; i++)
    if (a[i] == 1)
      for (j = i; i*j < N; j++) a[i*j] = 0;
  for (i = 2; i < N; i++)
    if (a[i] == 1) printf("%4d ", i);
  printf("\n");
  return 0;
}
