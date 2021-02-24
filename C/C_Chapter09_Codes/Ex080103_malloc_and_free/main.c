#include <stdio.h>
#include <stdlib.h>

enum { LENGTH = 10 };

int main(void)
{
    size_t i;
    int* nums = (int*)malloc(LENGTH * sizeof(int));

    for (i = 0; i < LENGTH; ++i) {
        nums[i] = i * LENGTH;
    }

    for (i = 0; i < LENGTH; ++i) {
        printf("%d ", nums[i]);
    }

    return 0;
}



