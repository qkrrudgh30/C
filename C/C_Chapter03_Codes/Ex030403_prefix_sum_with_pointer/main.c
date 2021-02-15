#include <stdio.h>
#include "prefix_sum.h"

#define LENGTH (6)

int main(void)
{
    int nums[LENGTH] = { 0, 1, 2, 3, 4, 5};
    int res = prefix_sum(LENGTH, nums);

    printf("res: %d\n", res);

    return 0;
}

