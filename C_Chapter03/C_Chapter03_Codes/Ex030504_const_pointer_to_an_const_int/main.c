#include <stdio.h>

int main(void)
{
    const int num = 10;
    const int* const const_ptr_to_const_int = &num;

    printf("num: %d\n", num);
    printf("const_ptr_to_const_int: %p\t%d\n", (void*)const_ptr_to_const_int, num);

    return 0;
}

