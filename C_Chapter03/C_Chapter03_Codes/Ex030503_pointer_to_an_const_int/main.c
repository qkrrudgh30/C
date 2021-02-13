#include <stdio.h>

int main(void)
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    /* const pointer to an int */
    int* const const_ptr_to_int = &num1;
    
    /* pointer to an int, which is const. (값을 보호할 때는, 이 방식으로 적는 경우가 많습니다.) */
    const int* ptr_to_const_int1 = &num2;

    /* pointer to an const int */
    int const* ptr_to_const_int2 = &num3;

    printf("num2: %d\n", num2);
    printf("num3: %d\n", num3);
    printf("ptr_to_const_int1: %p\t%d\n\n", (void*)ptr_to_const_int1, *ptr_to_const_int1);

    ptr_to_const_int1 = &num3;

    printf("num2: %d\n", num2);
    printf("num3: %d\n", num3);
    printf("ptr_to_const_int1: %p\t%d\n\n", (void*)ptr_to_const_int1, *ptr_to_const_int1);

    /* this does not compile. */
    /**ptr_to_const_int1 = 15;*/
    /*(*ptr_to_const_int1)++;*/

    num3 = 25;    /* num3는 const int가 아니므로, 직접 값을 바꿀 순 있습니다. ptr_to_const_int1을 이용한 역참조방식으로는 바꿀수 없습니다. */
    printf("num2: %d\n", num2);
    printf("num3: %d\n", num3);
    printf("ptr_to_const_int1: %p\t%d\n", (void*)ptr_to_const_int1, *ptr_to_const_int1);

    return 0;
}

