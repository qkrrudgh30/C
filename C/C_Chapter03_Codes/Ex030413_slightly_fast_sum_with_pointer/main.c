#include <stdio.h>

enum { LENGTH = 5 };

int main(void)
{
    size_t i;
    int nums[LENGTH] = { 0, 1, 2, 3, 4};
    int* ptr = nums;
    int res = 0;

    for (i = 0; i < LENGTH; ++i) {
        res += *ptr++;
    }

    printf("res: %d\n", res);


    return 0;
}

