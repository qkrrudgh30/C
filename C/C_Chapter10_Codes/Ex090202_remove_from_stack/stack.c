#include <stdio.h>
#include <assert.h>

#include "stack.h"

enum { FALSE = 0, TRUE = 1 };
enum { MAX_COUNT = 8 };
enum { INVALID_INDEX = -1 };

static int s_nums[MAX_COUNT];
static size_t s_nums_current_count = 0;

void push(int n)
{
    assert(s_nums_current_count < MAX_COUNT);

    s_nums[s_nums_current_count++] = n;

    return;
}

int is_empty(void)
{
    return (s_nums_current_count == 0);
}

int pop(void)
{
    assert(is_empty() == FALSE);

    return s_nums[--s_nums_current_count];
}


