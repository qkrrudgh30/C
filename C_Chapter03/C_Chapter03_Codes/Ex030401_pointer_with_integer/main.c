#include <stdio.h>

#define LENGTH (5)

int main(void)
{
    int nums[LENGTH] = { 0, 1, 2, 3, 4};    /* nums == 0x00000100 */

    /* Q. 각각의 포인터에 저장된 메모리 주소를 맞춰보세요. */
    int* ptr1 = nums + 2;
    int* ptr2 = &nums[0] + 2;
    int* ptr3 = nums + 4;
    int* ptr4 = ptr3 - 2;
    int* ptr5 = &nums[1] - 1;
    int* ptr6 = ptr5 - 1;

    return 0;
}

