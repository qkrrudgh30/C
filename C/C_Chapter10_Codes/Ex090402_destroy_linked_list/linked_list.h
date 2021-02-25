#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node {
    int value;
    struct node* next;
} node_t;

void print_linked_list(node_t* head);
void destroy(node_t* head);

#endif /* LINKED_LIST_H */




