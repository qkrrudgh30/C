#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

enum {
    LENGTH = 10
};

int main(void)
{
    int* ap_nums;    /* 메모리 할당된(allocated) 포인터라는 뜻에서 접두어 ap_을 붙히는게 좋습니다. */
    int* temp_ptr;
    size_t i;

    ap_nums = (int*)malloc(LENGTH * sizeof(int));
    temp_ptr = ap_nums;

    for (i = 0; i < LENGTH; ++i) {
        *temp_ptr++ = 10 * (i + 1);
    }

    free(ap_nums);

    return 0;
}



