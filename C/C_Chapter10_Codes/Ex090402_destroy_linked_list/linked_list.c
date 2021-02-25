#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "linked_list.h"

void print_linked_list(node_t* head)
{
    node_t* ptr_to_node = head;
    
    while (ptr_to_node != NULL) {
        printf("%d ", ptr_to_node->value);
        ptr_to_node = ptr_to_node->next;
    }

    return;
}

void destroy(node_t* head)
{
    node_t* ptr_to_node = head;
    
    while (ptr_to_node != NULL) {
        node_t* next = ptr_to_node->next;
        free(ptr_to_node);
        ptr_to_node = next;
    }

    return;
}

