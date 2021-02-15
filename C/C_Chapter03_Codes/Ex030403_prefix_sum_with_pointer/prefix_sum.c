#include <stdio.h>
#include <assert.h>
#include "prefix_sum.h"

int prefix_sum(const size_t len, int* data)
{
    int res = 0;
    size_t i;

    for (i = 0; i < len; ++i) {
        res += *(data + i);    /* res += data[i] */
    }

    return res;
}

