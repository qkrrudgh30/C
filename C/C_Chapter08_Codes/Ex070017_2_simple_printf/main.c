#include <stdio.h>
#include "simpleio.h"

int main(void)
{
    simple_printf("c\n", 'A');
    simple_printf("d\n", 10);
    simple_printf("s\n", "Hello, world!");

    simple_printf("\n");
    simple_printf("c d s\n", 'C', 123534, "Goodbye~ world!");

    return 0;
}



