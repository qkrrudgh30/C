#include <stdio.h>
#include <assert.h>

#include "linked_list.h"

typedef struct {
    int value;
    node_t* next;
} node_t;

void print_linked_list(const node_t* head)
{
    node_t* ptr_to_node;

    ptr_to_node = head;
    while (ptr_to_node != NULL) {
        printf("%d ", ptr_to_node->value);
        ptr_to_node = ptr_to_node->next;
    }

    return;
}



