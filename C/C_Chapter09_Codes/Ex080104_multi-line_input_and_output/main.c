#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum { 
    LINES_COUNT = 5,
    LINE_LENGTH = 1024
};

int main(void)
{
    char* lines[LINES_COUNT];
    char line[LINE_LENGTH];
    size_t i, j;

    for (i = 0; i < LINES_COUNT; ++i) {
        if (!fgets(line, LINE_LENGTH, stdin)) {
            clearerr(stdin);
            break;
        }

        lines[i] = (char*)malloc(strlen(line) + 1);

        if (lines[i] == NULL) {
        fprintf(stderr, "%s\n", "out of mem");
        break;
        }

        strcpy(lines[i], line);
    }

    for (j = 0; j < i; ++j) {
        printf("%s", lines[j]);
    }

    for (j = 0; j < i; ++j) {
        free(lines[i]);
    }

    return 0;
}




