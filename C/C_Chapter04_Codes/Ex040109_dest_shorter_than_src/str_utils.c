#include <stdio.h>
#include <assert.h>
#include "str_utils.h"

size_t my_strlen(const char* str)
{
    const char* temp_ptr = str;

    while (*temp_ptr++ != '\0') {

    }

    return (size_t)(temp_ptr - str - 1);
}

int my_strcmp(const char* lhs, const char* rhs)
{
    while (*lhs != '\0' && *lhs == *rhs) {
        ++lhs;
        ++rhs;
    }

    return *lhs - *rhs;
}

void my_strcpy(char* dest, const char* src) 
{
    while (*src != '\0') {
        *dest++ = *src++;
    }
    *dest = '\0';

    return;
}


