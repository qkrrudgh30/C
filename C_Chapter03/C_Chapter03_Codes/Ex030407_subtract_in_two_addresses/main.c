#include <stdio.h>

#define LENGTH (5)

int main(void)
{
    int nums[LENGTH] = { 0, };

    /*
    int* ptr1 = &nums[1] + &nums[3];
    int res = &nums[1] + &nums[3];
    
    int* ptr2 = &nums[1] - &nums[3];
    */
    int res = &nums[1] - &nums[3];
    /*
    int* ptr3 = &nums[1] * &nums[3];
    int res = &nums[1] * &nums[3];

    int* ptr4 = &nums[1] / &nums[3];
    int res = &nums[1] / &nums[3];
    */

    printf("%d\n", res);

    return 0;
}

