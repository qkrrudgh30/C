#include <stdio.h>
#include <assert.h>
#include "vector.h"

void add_vec(const int* op_v1, const int* op_v2, int* out_v)
{
    size_t i;

    for (i = 0; i < VECTOR_LENGTH; ++i) {
        *out_v++ = *op_v1++ + *op_v2++;
    }

    return;
}

