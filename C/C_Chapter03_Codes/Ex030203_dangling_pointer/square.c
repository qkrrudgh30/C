#include <stdio.h>

#include "square.h"

const int* square(const int a)
{
    int res = a * a;

    return &res;
}

