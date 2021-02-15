#include <stdio.h>
#include "arr_process.h"

#define LENGTH (5)

int g_my_nums[LENGTH] = { 1, 2, 3, 4, 5};

void process(const size_t len, int nums[]);

int main(void)
{
    size_t i;

    for (i = 0; i < LENGTH; i++)
    {
        printf("my_nums[%d]: %d\n", i, g_my_nums[i]);
    }
    
    arr_process(LENGTH, g_my_nums);

    for (i = 0; i < LENGTH; i++)
    {
        printf("my_nums[%d]: %d\n", i, g_my_nums[i]);
    }

    return 0;
}

void process(const size_t len, int nums[])
{
    size_t i;

    for (i = 0; i < len; ++i) {
        nums[i] *= 2;
    }

    return;
}
