#include <stdio.h>
#include <assert.h>

#include "queue.h"

enum { FALSE = 0, TRUE = 1 };
enum { MAX_COUNT = 8 };
enum { INVALID_INDEX = -1 };

static int s_nums[MAX_COUNT];
static size_t s_nums_current_count = 0;
static size_t s_front = 0;
static size_t s_back = 0;

void enqueue(int n)
{
    assert(s_nums_current_count < MAX_COUNT);

    s_nums[s_back] = n;

    s_back = (s_back + 1) % MAX_COUNT;
    ++s_nums_current_count;

    return;
}

int is_empty(void)
{
    return (s_nums_current_count == 0);
}

int dequeue(void)
{
    int ret;

    assert(is_empty());

    ret = s_nums[s_front];

    s_front = (s_front + 1) % MAX_COUNT;
    --s_nums_current_count;

    return ret;
}

