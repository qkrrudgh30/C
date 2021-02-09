#include <stdio.h>
#include "print_value.h"

int main(void)
{
    float f1 = 3.141592;
    float* ptr = &f1;

    print_value(ptr);

    return 0;
}

