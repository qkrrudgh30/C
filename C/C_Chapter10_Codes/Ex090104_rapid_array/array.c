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

void unorderly_remove_from(size_t index)
{
    assert(index < s_nums_current_count);

    s_nums[index] = s_nums[--s_nums_current_count];
    /* 배열 속에 저장된 데이터의 순서가 중요하지 않다면 이런 hack을 써서 O(1) 연산을 할 수 있습니다. */

    return;
}

size_t search_in(int n)
{
    size_t i;

    for (i = 0; i < s_nums_current_count; ++i) {
        if (s_nums[i] == n) {
            return i;
        }
    }

    return INVALID_INDEX;
}

void print_array(void)
{
    size_t i;

    for (i = 0; i < s_nums_current_count; ++i) {
        printf("s_nums[%zu]: %d\t", i, s_nums[i]);
    }
    printf("\n");

    return;
}

