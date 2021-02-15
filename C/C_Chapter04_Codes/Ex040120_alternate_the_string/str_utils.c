#include <stdio.h>
#include <assert.h>
#include "str_utils.h"

int is_alpha(int c)
{
    return ('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z');
}

int to_upper(int c)
{
    if (is_alpha(c)) {
        /* 비트마스킹하라고 일부로 표준에서 32만큼 차이낸 걸수도 있다는 합리적 의심 중입니다. */
        return c & ~0x20;    /* 뺄셈연산보다 비트마스킹이 더 빠릅니다. */
    }
    return c;
}

int to_lower(int c)
{
    if (is_alpha(c)) {
        return c | 0x20;    
    }
    return c;
}

void string_toupper(char* str)
{
    while (*str != '\0') {
        *str = to_upper(*str);
        ++str;
    }
}

void string_tolower(char* str)
{
    while (*str != '\0') {
        *str = to_lower(*str);
        ++str;
    }
}



