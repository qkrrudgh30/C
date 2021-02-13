#include <stdio.h>

int main(void)
{
    const int nums[3][4] = {
        { 0, 1, 2, 3},
        { 4, 5, 6, 7},
        { 8, 9, 10, 11}
    };
    const int* ptrs[3];

    ptrs[0] = nums[0];
    ptrs[1] = nums[1];
    ptrs[2] = nums[2];

    printf("nums[0] address: %p\n", (void*)nums[0]);
    printf("nums[1] address: %p\n", (void*)nums[1]);
    printf("nums[2] address: %p\n", (void*)nums[2]);
    /* Q. 아래 두 printf() 함수가 출력하는 문자열의 결과는? */
    printf("nums[2]'s offset from nums[0]: %d\n", nums[2] - nums[0]);
    printf("nums[1]'s offset from nums[0]: %d\n", nums[1] - nums[0]);

    printf("\n");

    printf("ptrs[0] address: %p\n", (void*)ptrs[0]);
    printf("ptrs[1] address: %p\n", (void*)ptrs[1]);
    printf("ptrs[2] address: %p\n", (void*)ptrs[2]);
    /* Q. 아래 두 printf() 함수가 출력하는 문자열의 결과는? */
    printf("ptrs[2]'s offset from ptrs[0]: %d\n", ptrs[2] - ptrs[0]);
    printf("ptrs[1]'s offset from ptrs[0]: %d\n", ptrs[1] - ptrs[0]);

    return 0;
}

