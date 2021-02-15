#include <stdio.h>
#include "adder.h"

int main(void)
{
    int* ptr_res = add(17, 20);

    printf("17 + 20 = %d\n", *ptr_res);

    return 0;
}

