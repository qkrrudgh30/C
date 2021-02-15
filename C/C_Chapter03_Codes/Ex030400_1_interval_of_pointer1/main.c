#include <stdio.h>

#define LENGTH (5)

int main(void)
{
    size_t i;
    char chars[LENGTH] = { '0', '1', '2', '3', '4'};
    int nums[LENGTH] = { 0, 1, 2, 3, 4};
    char* ptr_to_array_of_char = chars;
    int* ptr_to_array_of_int = nums;

    for (i = 0; i < LENGTH; ++i) {
        printf("chars[%zu]: %p\t%c\n", i, (void*)ptr_to_array_of_char, *ptr_to_array_of_char);
        ++ptr_to_array_of_char;
    }

    for (i = 0; i < LENGTH; ++i) {
        printf("nums[%zu]: %p\t%d\n", i, (void*)ptr_to_array_of_int, *ptr_to_array_of_int);
        ++ptr_to_array_of_int;
    }

    return 0;
}

