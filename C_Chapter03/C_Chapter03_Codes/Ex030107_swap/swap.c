#include <stdio.h>
#include "swap.h"

void swap1(int op1, int op2)
{
    int temp;

    temp = op1;
    op1 = op2;
    op2 = temp;

    return;
}

void swap2(int* op1, int* op2)
{
    int temp;

    temp = *op1;
    *op1 = *op2;
    *op2 = temp;

    return;
}



