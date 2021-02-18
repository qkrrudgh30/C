#include <stdio.h>

int main(int argc, const char* argv[])
{
    size_t i;

    printf("argc: %d\n", argc);

    for (i = 0; i < (size_t)argc; ++i) {
        printf("argv[%zu]: %s\n", i, argv[i]);
    }

    return 0;
}



