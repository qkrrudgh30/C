#include <stdio.h>

#define LENGTH (3)

int main(void)
{
    int i;
    int num = 1024;
    int nums[LENGTH] = { 12, 34, 56};
    int* ptr = nums;

    for (i = -1; i <= LENGTH; ++i) {
        printf("%p: %d\n", (void*)(ptr + i), *(ptr + i));
    }


    return 0;
}

