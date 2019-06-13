#include <stdio.h>
#include <stdlib.h>

typedef struct node *link;
struct node { char item; link l, r;};

void traverse(link);

int main(void) {

  link head, a, b, c;
  a = malloc(sizeof(*a));
  a->item = 'A';
  
  b = malloc(sizeof(*b));
  b->item = 'B';

  c = malloc(sizeof(*c));
  c->item = 'C';
  
  head = a; a->l = b; a->r = c;
  b->l = b->r = NULL;
  c->l = c->r = NULL;

  traverse(head);
  return 0;
}

void traverse(link h) {
  // 先行順
  if (h == NULL) return;
  printf("visited node = %c\n", h->item);
  traverse(h->l);
  traverse(h->r);
}