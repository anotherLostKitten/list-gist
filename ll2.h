struct node {
  unsigned char cargo[20];
  struct node* next;
};

struct node* insert_front(struct node* head, unsigned char* str);
struct node* free_list(struct node* head);
void print_list(struct node* head);
