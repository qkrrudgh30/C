#include <stdio.h>

const char* combine_string(const char* lhs, const char* rhs);

int main(void)
{
    const char* str1 = "Hello, ";
    const char* str2 = "world!";
    const char* res;

    /* 호출자 입장에선 combine_string() 함수가 내부에서 동적 메모리를 할당해서 반환한다는 사실을 어떻게 알 수 있을까요? */
    res = combine_string(str1, str2);


    return 0;
}

const char* combine_string(const char* lhs, const char* rhs)
{
    const char* ap_str;
    char* temp;
    size_t size = strlen(lhs) + strlen(rhs);

    ap_str = (char*)malloc(size);

    /* 복사 생략 */

    return ap_str;
}

