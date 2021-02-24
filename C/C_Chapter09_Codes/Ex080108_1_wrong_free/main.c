#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

enum {
    LENGTH = 10
};

int main(void)
{
    size_t i;
    int* nums;

    nums = (int*)malloc(LENGTH * sizeof(int));

    for (i = 0; i < LENGTH; ++i) {
        *nums++ = 10 * (i + 1);
    }
    
    free(nums);

    return 0;
}



