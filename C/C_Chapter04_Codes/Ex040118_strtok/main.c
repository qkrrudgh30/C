#include <stdio.h>
#include <string.h>

int main(void)
{
    char msg[] = "Hello, world. Goodbye, world.";    /* strtok() 함수도 새로운 문자열을 만들지 않고, 원본을 토큰화 합니다. 따라서 const가 붙으면 안됩니다. */
    const char delims[] = ",. ";

    char* token = strtok(msg, delims);    /* 토큰화를 시작하려면 문자열을 구분자(delims)와 함께 strtok()에 넣습니다. */
    while (token != NULL) {               
        printf("%s\n", token);
        token = strtok(NULL, delims);     /* 그 msg의 다음 토큰을 구하려면 msg 대신 NULL을 넣습니다. */
        /* 더 이상 토큰이 없다면 strtok()는 NULL 포인터를 반환합니다. */
    }

    return 0;
}

ㅋ