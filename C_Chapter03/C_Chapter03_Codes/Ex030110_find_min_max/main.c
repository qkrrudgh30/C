#include <stdio.h>
#include "algorithm.h"

#define LENGTH (5)

int main(void)
{
    const int nums[LENGTH] = { 7, 8, 1, 10, 5};
    int min;
    int max;

    get_min_max(LENGTH, nums, &min, &max);

    printf("min: %d\n", min);
    printf("max: %d\n", max);

    return 0;
}


