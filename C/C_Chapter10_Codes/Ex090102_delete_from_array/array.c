#include <stdio.h>
#include <assert.h>

#include "array.h"

enum { MAX_COUNT = 8 };
enum { INVALID_INDEX = -1 };

static int s_nums[MAX_COUNT];
static size_t s_nums_current_count = 0;

void insert_into(size_t index, int n)
{
    size_t i;

    assert(index <= s_nums_current_count);
    assert(s_nums_current_count < MAX_COUNT);

    for (i = s_nums_current_count; i > index; --i) {
        s_nums[i] = s_nums[i - 1];
    }

    s_nums[index] = n;
    ++s_nums_current_count;

    return;
}

void remove_from(size_t index)
{
    size_t i;

    assert(index < s_nums_current_count);

    --s_nums_current_count;
    for (i = index; i < s_nums_current_count; ++i) {
        s_nums[i] = s_nums[i + 1];
    }

    return;
}


