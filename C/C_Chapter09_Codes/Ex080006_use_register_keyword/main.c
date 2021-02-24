#include <stdio.h>

enum { COUNT = 5 };

int main(void)
{
    int num;
    register size_t i;

    num = 0;

    for (i = 0; i < COUNT; ++i) {
        num += i;
    }

    printf("num: %d\n", num);

    return 0;
}



