#include <stdio.h>

#define TRUE (1)

int main(void)
{
    int c;

    while (TRUE) {
        if ((c = getchar()) == EOF) {
            break;
        }
        putchar(c);
    }

    return 0;
}

