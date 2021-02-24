#include <stdio.h>
#include <stdlib.h>

enum {
    TRUE = 1,
    FALSE = 0,
    LINE_LENGTH = 1024,
    INCREMENT = 2
};

int main(void)
{
    char** lines = NULL;
    char** temp;
    char line[LINE_LENGTH];
    size_t lines_max = 0;
    size_t lines_count = 0;
    size_t i;

    while (TRUE) {
        if (fgets(line, LINE_LENGTH, stdin) == NULL) {
            clearerr(stdin);
            break;
        }

        if (lines_count == lines_max) {
            temp = (char*)realloc(lines, (lines_max + INCREMENT) * sizeof(char*));

            if (temp == NULL) {
                fprintf(stderr, "%s\n", "out of memory");
                break;
            }

            lines = temp;
            lines_max += INCREMENT;
        }

        lines[lines_count] = (char*)malloc(strlen(line) + 1);
        if (lines[lines_count] == NULL) {
            fprintf(stderr, "%s\n", "out of memory");
            break;
        }
        strcpy(lines[lines_count++], line);

    }

    for (i = 0; i < lines_count; ++i) {
        printf("[%d] %s", i, lines[i]);
    }

    for (i = 0; i < lines_count; ++i) {
        free(lines[i]);
        lines[i] = NULL;
    }
    free(lines);
    lines = NULL;
    
    return 0;
}

