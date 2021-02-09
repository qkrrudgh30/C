#include <stdio.h>

#define LENGTH (6)

int main(void)
{
    size_t i;
    int nums[LENGTH] = { 0, 1, 2, 3, 4, 5};
    int* ptr = NULL;

    ptr = nums;
    for (i = 0; i < LENGTH; ++i) {
        printf("(ptr+%zu): %p\t(&nums[%zu]): %p\t*(ptr+%zu): %d\n", i, (void*)ptr, i, (void*)(&nums[i]), i, *ptr);
        ++ptr;
    }

    /* this does not compile. */
    /* ptr = nums[0] */

    /* 아래 두 코드는 결과적으로 같습니다. */
    ptr = nums;
    printf("\nptr: %p\n", (void*)ptr);
    ptr = &nums[0];
    printf("ptr: %p\n", (void*)ptr);
 
    return 0;
}

