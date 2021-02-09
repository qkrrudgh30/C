#include <stdio.h>
#include "swap.h"

int main(void)
{
    int num1 = 10;
    int num2 = 20;

    printf("before swap1()\n");
    printf("num1: %d, num2: %d\n", num1, num2);

    swap1(num1, num2);

    printf("after swap1()\n");
    printf("num1: %d, num2: %d\n\n", num1, num2);

    printf("before swap2()\n");
    printf("num1: %d, num2: %d\n", num1, num2);

    swap2(&num1, &num2);

    printf("after swap2()\n");
    printf("num1: %d, num2: %d\n\n", num1, num2);


    return 0;
}

