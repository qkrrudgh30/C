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

void insert_front(node_t** ptr_to_head, int n)
{
    node_t* ptr_to_new_node;

    ptr_to_new_node = (node_t*)malloc(sizeof(node_t));
    ptr_to_new_node->value = n;

    ptr_to_new_node->next = *ptr_to_head;
    *ptr_to_head = ptr_to_new_node;

    return;
}

void orderly_insert_into(node_t** ptr_to_head, int n)
{
    node_t* ptr_to_new_node;
    node_t** pp;

    ptr_to_new_node = (node_t*)malloc(sizeof(node_t));
    ptr_to_new_node->value = n;

    pp = ptr_to_head;
    while (*pp != NULL) {
        if (n <= (*pp)->value) {
            break;
        }

        pp = &(*pp)->next;
    }

    ptr_to_new_node->next = *pp;
    *pp = ptr_to_new_node;

    return;
}

