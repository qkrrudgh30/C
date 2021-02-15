#include <stdio.h>

#define LENGTH (5)

int main(void)
{   
    int nums[LENGTH] = { 0, 1, 2, 3, 4};
    int* ptr = nums;

    printf("%d %d %d\n", nums[1], ptr[1], *(ptr + 1));

    return 0;
}

