#include <stdio.h>
#include <assert.h>
#include "str_utils.h"

int my_strcmp(const char* lhs, const char* rhs)
{
    while (*lhs != '\0' && *lhs == *rhs) {
        ++lhs;
        ++rhs;
    }

    return *lhs - *rhs;
}

int my_strncmp(const char* lhs, const char* rhs, size_t count)
{
    while (*lhs != '\0' && *lhs == *rhs && count != 1) {
        ++lhs;
        ++rhs;
        --count;
    }

    return *lhs - *rhs;
}



