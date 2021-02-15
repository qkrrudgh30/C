#include <stdio.h>
#include <string.h>
#include "str_utils.h"

int main(void)
{
    const char* str1 = "AbCdE";
    const char* str2 = "AbCDe";
    size_t count = 3;

    printf("my_strncmp(str1, str2, count): %d\n", strncmp(str1, str2, count));
    printf("my_strncmp(str1, str2, count): %d\n", my_strncmp(str1, str2, count));

    count = 4;
    printf("my_strncmp(str1, str2, count): %d\n", strncmp(str1, str2, count));
    printf("my_strncmp(str1, str2, count): %d\n", my_strncmp(str1, str2, count));

    return 0;
}

