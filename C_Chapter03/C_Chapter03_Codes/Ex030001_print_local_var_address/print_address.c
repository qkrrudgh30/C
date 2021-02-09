#include <stdio.h>
#include "print_address.h"

void print_address(void)
{
    int num = 10;

    printf("Address of num: %p\n", (void*)&num);

    return;
}



