#include <stdio.h>
#include "arr_process.h"

void arr_process(const size_t len, int nums[])
{
    size_t i;

    for (i = 0; i < len; ++i) {
        nums[i] *= 2;
    }

    return;
}



