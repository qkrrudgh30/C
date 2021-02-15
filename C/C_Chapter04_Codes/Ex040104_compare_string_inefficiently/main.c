#include <stdio.h>
#include "str_utils.h"

int main(void)
{
    char string1[] = "Hello, world!";
    char string2[] = "Yello, world!";
    char string3[] = "Hello, World!";

    printf("compare_string_inefficiently(string1, string2): %d\n", compare_string_inefficiently(string1, string2));
    printf("compare_string_inefficiently(string1, string3): %d\n", compare_string_inefficiently(string1, string3));
    printf("compare_string_inefficiently(string2, string2): %d\n", compare_string_inefficiently(string2, string2));

    return 0;
}

