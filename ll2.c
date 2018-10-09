#include <stdlib.h>
#include <stdio.h>
#include "ll2.h"
#include "bastrlib.h"

struct node* insert_front(struct node* head, unsigned char* str) {
  struct node* n = malloc(sizeof(struct node));
  bastrncpy(n->cargo, str, sizeof(n->cargo));
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

void print_list(struct node* head) {
  if (head) {
    printf("%s -> ", head->cargo);
    print_list(head->next);
  } else
    printf("NULL\n");
}
