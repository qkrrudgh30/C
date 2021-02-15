#include <stdio.h>

int main(void)
{
    int num1 = 100;
    int num2 = 200;
    int* const ptr_to_num = &num1;

    /* this does not compile. */
    /*ptr_to_num = &num2;*/

    printf("num: %d\n", num1);
    printf("ptr_to_num: %p\t%d\n", (void*)ptr_to_num, *ptr_to_num);
    *ptr_to_num = num2;
    printf("num: %d\n", num1);
    printf("ptr_to_num: %p\t%d\n", (void*)ptr_to_num, *ptr_to_num);


    return 0;
}

