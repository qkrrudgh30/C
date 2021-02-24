#include <stdio.h>

void combine_string(const char* lhs, const char* rhs, char* out_str);

int main(void)
{
    const char* str1 = "Hello, ";
    const char* str2 = "world!";
    char* ap_res;
    size_t size;

    size = strlen(str1) + strlen(str2);
    ap_res = (char*)malloc(size);

    combine_string(str1, str2, ap_res);

    free(ap_res);
    ap_res = NULL;

    return 0;
}

void combine_string(const char* lhs, const char* rhs, char* out_str)
{
    /* 생략 */

    return;
}

