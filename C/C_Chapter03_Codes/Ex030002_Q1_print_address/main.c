#include <stdio.h>

int main(void)
{
    const unsigned int NUM1 = 3;
    const unsigned int NUM2 = 5;
    const unsigned int NUM3 = NUM1 & NUM2;    

    /* Q1. NUM3의 메모리 주소가 008FFB54라면, 화면에 어떻게 출력 될지 적어 보세요. */
    printf("%p: %d", (void*)&NUM3, NUM3);

    return 0;
}

