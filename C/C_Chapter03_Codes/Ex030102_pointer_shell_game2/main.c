#include <stdio.h>

int main(void)
{
    int num1 = 15;
    int num2 = 30;
    int num3 = 45;

    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int* ptr3 = &num3;

    ptr1 = ptr2;
    ptr2 = ptr3;

    *ptr3 *= 2;
    *ptr1 += *ptr3;
    *ptr2 *= 2;

    /* Q. 출력 결과는? */
    printf("%d %d %d", num1, num2, num3);

    return 0;
}




