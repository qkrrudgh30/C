#include <stdio.h>

void swap(int** op1, int** op2);

int main(void)
{
    int num1 = 5;
    int num2 = 7;
    int* p = &num1;
    int* q = &num2;

    printf("before swap. p: %p  q: %p\n", (void*)p, (void*)q);
    swap(&p, &q);
    printf("after swap.  p: %p  q: %p\n", (void*)p, (void*)q);

    return 0;
}

void swap(int** op1, int** op2)
{
    int* temp = *op1;
    *op1 = *op2;
    *op2 = temp;

    return;
}

