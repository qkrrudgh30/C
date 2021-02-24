#include <stdio.h>
#include <stdlib.h>

enum {
    COUNT = 5
};

int main(void)
{
    int* nums;
    int* temp_ptr;
    char* ptr_to_ch;
    size_t i;

    nums = (int*)malloc(COUNT * sizeof(int));

    temp_ptr = nums;
    for (i = 0; i < COUNT; ++i) {
        *temp_ptr++ = 1000;
    }

    ptr_to_ch = (char*)nums;
    for (i = 0; i < COUNT * 4; ++i) {
        printf("%p: %hhX\n", (void*)(ptr_to_ch + i), *(ptr_to_ch + i));
    }

    free(nums);
    nums = NULL;

    return 0;
}



