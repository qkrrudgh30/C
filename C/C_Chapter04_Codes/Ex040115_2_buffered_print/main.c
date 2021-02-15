#include <stdio.h>
#include "buffered_print.h"

int main(void)
{
    buffered_print("Hello, ");
    buffered_print("world! ");
    buffered_print("C is awesome! ");
    buffered_print("Java is awesome too! ");
    buffered_print("is C++ better? ");

    return 0;
}

