#include <stdio.h>
#include "str_utils.h"

#define LENGTH (20)

int main(void)
{
    const char* string = "Hello, world!";
    char cloned_string[LENGTH];

    printf("string: %s\tcloned_string: %s\n", string, cloned_string);
    my_strcpy(cloned_string, string);
    printf("string: %s\tcloned_string: %s\n", string, cloned_string);

    return 0;
}

