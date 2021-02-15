#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "str_utils.h"

int compare_string_inefficiently(const char* str1, const char* str2)
{
    size_t i;
    size_t str1_len = strlen(str1);    /* 반복문 1회 */
    size_t str2_len = strlen(str2);    /* 반복문 2회 */
    size_t str_min_len = str1_len < str2_len ? str1_len : str2_len;

    for (i = 0; i < str_min_len; ++i) {    /* 반복문 3회... 줄일 수 없을까? */
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
    }

    return 0;
}



