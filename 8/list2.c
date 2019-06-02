#include <stdio.h>
#include <stdlib.h>
typedef int Item;
typedef struct node *link;
struct node {
  Item item; link next;
};
int main(void){
  link head, a, b, c, d, t, x;
  a = malloc(sizeof(*a));
  b = malloc(sizeof(*b));
  c = malloc(sizeof(*c));
  d = malloc(sizeof(*d));
  a->item = 10; b->item = 20; c->item = 30; d->item = 40;
  a->next = b; b->next = c; c->next = d; d->next = NULL;
  
  head = a;

  // 挿入
  t = malloc(sizeof(*t)); t->item = 50; x = head->next;
  t->next = x->next; x->next = t;

  for (t = head; t != NULL; t = t->next){
    printf("%d\n", t->item);
  }
  return 0;
}