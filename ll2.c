#include <stdlib.h>
#include <stdio.h>
#include "ll2.h"
#include "bastrlib.h"

struct node* insert_front(struct node* head, unsigned char* str) {
  struct node* n = malloc(sizeof(struct node));
  n->cargo = str;
  n->next = head;
  head = n;
  return head;
}

struct node* free_list(struct node* head) {
  if(head)
    for (struct node* i = head -> next; i; i = i->next) {
      free(head);
      head = i;
    }
  return NULL;
}

int print_list(struct node* head) {
  if (head) {
    printf("%s -> ", head->cargo);
    print_ll(head->next);
  } else
    printf("NULL\n");
  return 0;
}
