#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "file_utils.h"

int main(void)
{
    copy_file("world.txt", "hello.txt");
    /* 파일을 복사하려면 이렇게 코드를 열어서 수정해줘야만 한다. */
    /* 사용자에게 입력 받아서 복사할 순 없을까? 이후에 배움. */

    return 0;
}



