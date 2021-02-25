#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node {
    int value;
    struct node* next;
} node_t;

void print_linked_list(node_t* head);
void destroy(node_t* head);
void insert_front(node_t** ptr_to_head, int n);
void orderly_insert_into(node_t** ptr_to_head, int n);
void remove_from(node_t** ptr_to_head, int n);

#endif /* LINKED_LIST_H */



