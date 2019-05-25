#include <stdio.h>
#include <stdlib.h>

struct node {
  int item;
  struct node *next;
};

int main(void) {
  struct node *head;
  head = malloc(sizeof(*head));
  head->item = 5;
  head->next = head;
  printf("head->item = %d\n", head->item);
  printf("head->next = %p\n", head->next);
  return 0;
}