#include <stdio.h>
#include <string.h>
#include "words_comparer.h"

int compare_words(const void* lhs, const void* rhs)
{
    const char** w0 = (const char**)lhs;
    const char** w1 = (const char**)rhs;

    return strcmp(*w0, *w1);
}

int compare_words_desc(const void* lhs, const void* rhs)
{
    const char** w0 = (const char**)lhs;
    const char** w1 = (const char**)rhs;

    return strcmp(*w1, *w0);
}


