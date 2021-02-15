#include <stdio.h>
#include "delete_const.h"

#define LENGTH 3

int main(void)
{
    size_t i;
    int nums[LENGTH] = { 43, 21, 52};
    const int* const_ptr_to_int = nums;

    for (i = 0; i < LENGTH; ++i) {
        printf("nums[%d]: %d\n", i, nums[i]);
    }

    delete_const(LENGTH, const_ptr_to_int);
    
    for (i = 0; i < LENGTH; ++i) {
        printf("nums[%d]: %d\n", i, nums[i]);
    }

    return 0;
}

