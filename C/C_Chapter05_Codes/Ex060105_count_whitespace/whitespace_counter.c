#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include "whitespace_counter.h"

#define TRUE (1)

/* 참고로, 공백문자를 스페이스바만 생각하는 경우가 많은데 그 외에도 '\t', '\n' 등등 많습니다. */
void print_whitespace_count(void)
{
    int c;
    size_t whitespace_count = 0u;
    size_t newline_count = 0u;

    while (TRUE) {
        if ((c = fgetc(stdin)) == EOF) {
            break;
        }

        if (isspace(c)) {
            ++whitespace_count;

            if (c == '\n') {
                ++newline_count;
            }
        }
    }

    printf("# whitespace count: %5zu\n", whitespace_count);
    printf("# new line count  : %5zu\n", newline_count);

    return;
}



