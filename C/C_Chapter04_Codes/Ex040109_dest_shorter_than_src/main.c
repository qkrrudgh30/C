#include <stdio.h>
#include "str_utils.h"

#define LENGTH (10)

int main(void)
{
    const char* str1 = "Hello, ";
    const char* str2 = "Hello, world!";
    char cloned_str[LENGTH];

    printf("str1: %s(%zu)\tcloned_str: %s(%zu)\n", str1, my_strlen(str1), cloned_str, my_strlen(cloned_str));
    my_strcpy(cloned_str, str1);
    printf("str1: %s(%zu)\tcloned_str: %s(%zu)\n", str1, my_strlen(str1), cloned_str, my_strlen(cloned_str));

    printf("str2: %s(%zu)\tcloned_str: %s(%zu)\n", str2, my_strlen(str2), cloned_str, my_strlen(cloned_str));
    my_strcpy(cloned_str, str2);
    printf("str2: %s(%zu)\tcloned_str: %s(%zu)\n", str2, my_strlen(str2), cloned_str, my_strlen(cloned_str));

    return 0;
}

