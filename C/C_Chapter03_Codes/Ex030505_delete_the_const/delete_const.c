#include <stdio.h>

void delete_const(const size_t len, const int* data)
{
    size_t i;
    int* clone_data = NULL;

    *((int*)data) = 12;

    clone_data = (int*)data;

    for (i = 1; i <= len; ++i) {
        *clone_data++ = i * 12;
    }
}




