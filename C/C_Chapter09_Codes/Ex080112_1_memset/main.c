#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum {
    COUNT = 5
};

int main(void)
{
    int* nums;
    char* temp_ptr;
    size_t i;

    nums = (int*)malloc(COUNT * sizeof(int));
    memset(nums, 1000, COUNT * sizeof(int));    /* 1000 == 0x3E8 */
    
    temp_ptr = (char*)nums;
    for (i = 0; i < COUNT * 4; ++i) {
        printf("%p: %hhX\n", (void*)(temp_ptr + i), *(temp_ptr + i));
    }

    free(nums);
    nums = NULL;

    return 0;
}



