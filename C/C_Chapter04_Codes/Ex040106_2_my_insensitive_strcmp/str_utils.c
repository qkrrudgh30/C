#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include "str_utils.h"

size_t my_strlen(const char* str)
{
    const char* temp_ptr = str;

    while (*temp_ptr != '\0') {
        ++temp_ptr;
    }

    return (size_t)(temp_ptr - str);
}

int my_strcmp(const char* lhs, const char* rhs)
{
    while (*lhs != '\0' && *lhs == *rhs) {
        ++lhs;
        ++rhs;
    }

    return *lhs - *rhs;
}

int my_insensitive_strcmp(const char* lhs, const char* rhs) 
{
    char c1, c2;

    c1 = tolower(*lhs);
    c2 = tolower(*rhs);

    while (c1 != '\0' && c1 == c2) {
        c1 = tolower(*++lhs);
        c2 = tolower(*++rhs);
    }

    if (c1 == c2) {
        return 0;
    }

    return c1 < c2 ? -1 : 1;

}



