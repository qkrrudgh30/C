#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node {
    int value;
    struct node* next;
} node_t;

void print_linked_list(node_t* head);
void destroy(node_t* head);
void insert_front(node_t** ptr_to_head, int n);    /* 이중 포인터는 당구와 비슷한듯. */

#endif /* LINKED_LIST_H */





