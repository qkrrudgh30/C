#include <stdio.h>

int main(void)
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int* ptr3 = &num3;

    ptr3 = ptr2;
    ptr2 = ptr1;
    ptr1 = ptr2;

    /* Q. num1을 가리키는 포인터는? */
    printf("%p: %d\n", (void*)ptr1, *ptr1);
    printf("%p: %d\n", (void*)ptr2, *ptr2);
    printf("%p: %d\n", (void*)ptr3, *ptr3);

    return 0;
}




