#include <stdio.h>

#define LENGTH (5)

int main(void)
{
    int nums[LENGTH] = { 0, 1, 2, 3, 4};
    int* ptr = nums;

    printf("ptr+0: %p\t%d\n", (void*)(ptr+0), *(ptr+0));
    ptr = ptr + sizeof(int);
    printf("ptr+sizeof(int): %p\t%d\n", (void*)ptr, *ptr);

    return 0;
}


