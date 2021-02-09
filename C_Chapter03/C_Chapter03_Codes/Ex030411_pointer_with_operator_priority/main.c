#include <stdio.h>

enum { LENGTH = 3 };

int main(void)
{
    int nums[LENGTH] = { 12, 34, 56};
    int* ptr = nums;    /* nums == 0x00000100이라 가정해 봅시다. */

    int num1 = *ptr++;
    int num2 = *++ptr;
    int num3 = ++*ptr;
    int num4 = (*ptr)++;

    /* Q. 하나씩 num에 저장된 값과 그때의 ptr이 가르키는 메모리 주소를 말해봅시다. */
    printf("%d %d %d %d\n", num1, num2, num3, num4);

    return 0;
}

