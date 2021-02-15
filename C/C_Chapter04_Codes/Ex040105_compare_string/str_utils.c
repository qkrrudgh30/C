#include <stdio.h>
#include <assert.h>
#include "str_utils.h"

int compare_string(const char* str1, const char* str2)
{
    while (*str1 != '\0' && *str1 == *str2) {
        ++str1;
        ++str2;
    }

    return *str1 - *str2;
}



