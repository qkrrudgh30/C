#include <stdio.h>

#define TRUE (1)

int main(void)
{
    int c;

    while (TRUE) {
        c = fgetc(stdin);
        putchar(c);
        if (c == 'x') {
            break;
        }
    }

    return 0;
}



