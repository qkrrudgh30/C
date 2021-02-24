#include <stdio.h>

enum { COUNT = 5 };

/* 첫 번째, 블록 범위에서만 사용 가능합니다. */
/*register int g_num;*/

int main(void)
{
    register int num = 10;
    register int nums[COUNT] = { 0, };
    int* p;

    /* 두 번째, 변수의 주소를 구할 수 없습니다. */
    /*p = &num;*/

    /* 세 번째, 레지스터 배열을 포인터로 사용 불가능합니다. */
    p = nums;
    /*p = &nums[0];*/

    printf("%d\n", *p);


    return 0;
}



