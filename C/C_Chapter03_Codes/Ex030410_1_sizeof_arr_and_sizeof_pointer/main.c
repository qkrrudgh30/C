#include <stdio.h>

enum { LENGTH = 3 };

int main(void)
{
    int nums[LENGTH] = { 12, 34, 56};
    int* ptr = nums;

    size_t size_of_arr = sizeof(nums);
    size_t size_of_ptr = sizeof(ptr);

    printf("size_of_arr: %d\n", size_of_arr);
    printf("size_of_ptr: %d\n", size_of_ptr);

    return 0;
}


