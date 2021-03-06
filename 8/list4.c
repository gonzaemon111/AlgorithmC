#include <stdio.h>
#include <stdlib.h>
typedef int Item;
typedef struct node *link;
struct node {
  Item item; link next;
};

link reverse(link x){
  link t, y = x, r = NULL;
  while (y != NULL){
    t = y->next; y->next = r; r = y; y = t;
  }
  return r;
}

int main(void){
  link head, a, b, c, d, t;
  a = malloc(sizeof(*a));
  b = malloc(sizeof(*b));
  c = malloc(sizeof(*c));
  d = malloc(sizeof(*d));
  a->item = 10; b->item = 20; c->item = 30; d->item = 40;
  a->next = b; b->next = c; c->next = d; d->next = NULL;
  
  head = reverse(head);
  for (t = head; t != NULL; t = t->next){
    printf("%d\n", t->item);
  }
  return 0;
}