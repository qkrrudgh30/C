#include <stdio.h>
#include "str_utils.h"

int main(void)
{
    char str[15] = "Welcome to C";

    printf("Is space alphabet?: %s\n", is_alpha(' ') ? "Yes" : "No");

    printf("m in uppercase: %c\n", to_upper('m'));
    printf("W in lowercase: %c\n", to_lower('W'));

    printf("before string_toupper(str): %s\n", str);
    string_toupper(str);
    printf("after string_toupper(str): %s\n", str);
    string_tolower(str);
    printf("after string_tolower(str): %s\n", str);

    return 0;
}

