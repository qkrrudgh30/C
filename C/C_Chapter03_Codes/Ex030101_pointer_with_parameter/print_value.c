#include <stdio.h>
#include "print_value.h"

void print_value(float* arg)
{
    printf("%p: %f\n", (void*)arg, *arg);

    return;
}




