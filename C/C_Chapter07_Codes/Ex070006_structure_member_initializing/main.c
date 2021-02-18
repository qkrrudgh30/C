#include <stdio.h>

typedef struct date {
    int year;
    int month;
    int day;
} date_t;

int main(void)
{
    /* 첫 번째 방법. 나중에 배우는 memset() 함수를 가지고도 동일한 효과를 낼 수 있습니다. */
    date_t today = { 0, };

    /* 두 번째 방법. 요소 나열법. 되도록이면 쓰지 않는게 좋습니다. 실수할 여지가 있습니다. */
    date_t tomorrow = { 2021, 7, 7 };
    /* 나중에 누가 일,월,년 순으로 구조체 멤버변수 순서를 바꿔버리면(미국에 오래 살다와서..) 문제가 생깁니다. */
    /* 정말 잘 안쓰지만, const 멤버 변수를 선언해서 사용할때만 요소 나열법이 유용합니다. 하지만 안씁니다. */


    return 0;
}



