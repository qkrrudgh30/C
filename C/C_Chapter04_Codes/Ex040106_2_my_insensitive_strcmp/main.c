#include <stdio.h>
#include "str_utils.h"

int main(void)
{
    int res;

    res = my_insensitive_strcmp("hello", "HELLO");
    printf("my_insensitive_strcmp(\"hello\", \"HELLO\"): %d\n", res);

    res = my_insensitive_strcmp("hello", "YELLO");
    printf("my_insensitive_strcmp(\"hello\", \"HELLO\"): %d\n", res);

    res = my_insensitive_strcmp("hello", "HELL");
    printf("my_insensitive_strcmp(\"hello\", \"HELLO\"): %d\n", res);

    return 0;
}

