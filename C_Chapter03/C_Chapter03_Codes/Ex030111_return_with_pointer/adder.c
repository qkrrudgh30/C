#include <stdio.h>
#include <assert.h>
#include "adder.h"

int* add(const int op1, const int op2)
{
    int res = op1 + op2;
    /* int* ptr_to_res = &res; */

    return &res;
}



